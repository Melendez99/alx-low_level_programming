#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to reversed and printed
 * Return: void
 */

void print_rev(char *s)
{
	int m;
	int count = 0;

	for (m = 0 ; s[m] != '\0' ; m++)
		count++;
	for (m = count - 1 ; m >= 0 ; m--)
	       _putchar(s[m]);
	_putchar('\n');
}
