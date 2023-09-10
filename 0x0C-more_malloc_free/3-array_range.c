#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max; MAX range of values stored
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *memory;
	int i;
	int s;

	if (min > max)
		return (NULL);
	s = max - min + 1;

	memory = malloc(sizeof(int) * s);

	if (memory == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)	

	memory[i] = min++;
	return (memory);
}
