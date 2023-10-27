#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index
 * Return: Value of a bit at a given index, or -1 unsuccesfully
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get;

	if (index > 64)
		return (-1);

	get = n >> index;

	return (get & 1);
}
