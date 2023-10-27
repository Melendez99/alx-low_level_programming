#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (binary = n, i = 0; (binary >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
