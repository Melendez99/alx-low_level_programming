#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of integers
 * @a: array to be used
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int h;

	for (h = 0 ; h < n ; h++)
	{
		printf("%d", a[h]);
		if (h < n - 1)
			printf(", ");
	}
	printf("\n");
}
