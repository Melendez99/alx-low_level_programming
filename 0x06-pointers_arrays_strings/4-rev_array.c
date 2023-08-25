#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c;
	int v;

	for (c = 0; c < n--; c++)
	{
		v = a[c];
		a[c] = a[n];
		a[n] = v;
	}
}
