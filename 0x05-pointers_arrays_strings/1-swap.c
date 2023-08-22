#include "main.h"

/**
 * swap_int - function swaps two integers
 * @a: value 1
 * @b: value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
