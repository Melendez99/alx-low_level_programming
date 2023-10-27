#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: number to set
 * @index: index position to change
 * Return: 1 successfully, -1 if unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int set;

	if (index > 64)
		return (-1);
	set = index;
	for (i = 1; set > 0; i *= 2, set--)
		;

	if ((*n >> set) & 1)
		*n -= i;

	return (1);
}
