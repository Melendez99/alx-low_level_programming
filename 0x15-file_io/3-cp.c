#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: number argument
* @argv: string argument
* Return: 0
*/
int main(int argc, char *argv[])	
{			
int file_two;	
int file_one;				
int num1 = 1024, num2 = 0;	
char buf[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_one file_two\n"), exit(97);
file_one = open(argv[1], O_RDONLY);
if (file_one == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_two = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
if (file_two == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_one), exit(99);
}
while (num1 == 1024)
{
	num1 = read(file_one, buf, 1024);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	num2 = write(file_two, buf, num1);
	if (num2 < num1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file_one) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_one), exit(100);

if (close(file_two) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_two), exit(100);

return (0);
}
