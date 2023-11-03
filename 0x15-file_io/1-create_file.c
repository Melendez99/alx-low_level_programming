#include "main.h"

/**
 i* create_file - creates a file
 * @filename: pointer to the name of file to create
 * @text_content: pointer to a string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int W, O, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	O = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(o, text_content, len);

	if (O == -1 || W == -1)
		return (-1);

	close(O);

	return (1);
}
