#include "main.h"

/**
 * flip_bits - converts number of flip bits to get from one num to another num
 * @n: first num
 * @m: second num to convert to
 * Return: num of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int num;

	flip = n ^ m;
	num = 0;

	while (flip)
	{
		num++;
		flip &= (flip - 1);
	}

	return (num);
}

