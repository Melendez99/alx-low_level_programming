#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int g, n, count = 0;

	for (g = 0 ; str[g] != '\0' ; g++)
		count++;
	n = (count - 1) / 2;
	for (g = n + 1 ; str[g] != '\0' ; g++)
		_putchar(str[g]);
	_putchar('\n');
}
