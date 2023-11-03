#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename: pointer to file name
 * @letters: number of letters the function reads and prints
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, W, R;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	O = open(filename, O_RDONLY);
	R = read(O, buffer, letters);
	W = write(STDOUT_FILENO, buffer, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(O);

	return (W);
}
