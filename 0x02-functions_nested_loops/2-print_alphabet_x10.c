#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case
 *
 * Returns: 0
 */

void print_alphabet_x10(void)
{
int d;
char c;

for (d = 0 ; d < 10 ; d++)
{
	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
_putchar('\n');
}
}
