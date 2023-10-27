#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: number
 * @index: index position to start
 * Return: 1 succesfully, -1 if unsuccesfully
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 64)
		return (-1);

	for (m = 1; index > 0; index--, m *= 2)
		;
	*n += m;

	return (1);
}
