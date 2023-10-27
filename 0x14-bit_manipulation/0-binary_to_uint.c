#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Pointer to string
 * Return: Converted number 0r 0 if there is one or more chars in the string
 */

unsigned int binary_to_uint(const char *b)
{
	signed int binary = 0;
	signed int n = 0;


	if (!b)
		return (0);

	while (b[binary] != '\0')
	{
		if (b[binary] != '0' && b[binary] != '1')
		{
			return (0);
		}

		n <<= 1;

		if (b[binary] & 1)
		{
			n += 1;
		}
		binary += 1;
	}
	return (n);
}
