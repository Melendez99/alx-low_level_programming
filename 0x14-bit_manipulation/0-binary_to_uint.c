#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int p;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (p = 1, i = 0, len--; len >= 0; len--, p *= 2)
	{
		if (b[len] == '1')
			i += p;
	}

	return (i);
}
