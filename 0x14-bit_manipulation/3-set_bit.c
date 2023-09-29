#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: points to a decimal number
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
