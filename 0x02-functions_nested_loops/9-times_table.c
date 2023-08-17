#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 * void: empty parameters
 * Return: void
 */

void times_table(void)
{
	int r, v, result;

for (r = 0 ; r < 10 ; r++)
{
	for (v = 0 ; v < 10 ; v++)
{
	result = r * v;
	if (v == 0)
		printf("%d, ", result);
	else
{
	printf("%2d", result);
	if (v != 9)
		printf(", ");
}

}
printf("\n");
}

}
