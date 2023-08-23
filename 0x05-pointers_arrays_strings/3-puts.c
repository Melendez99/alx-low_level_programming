#include "main.h"

/**
 * _puts - prints string
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int m;

	for (m = 0 ; str[m] != '\0' ; m++)
		_putchar(str[m]);
	_putchar('\n');
}
