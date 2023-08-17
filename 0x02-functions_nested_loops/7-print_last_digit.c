#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @v: function parameter
 *
 * Return: d
 */

int print_last_digit(int v)
{
int d;

d = v % 10;
if (v < 0)
	d = -d;
_putchar(d + '0');
return (d);
}
