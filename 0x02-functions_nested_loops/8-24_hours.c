#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 * Return: void
 */

void jack_bauer(void)
{
int a, b;

for (a = 0 ; b < 24 ; a++)
{
for (b = 0 ; a < 60 ; b++)
{
	_putchar(a / 10 + '0');
	_putchar(a % 10 + '0');
	_putchar(':');
	_putchar(a / 10 + '0');
	_putchar(a % 10 + '0');
	_putchar('\n');
}

}

}
