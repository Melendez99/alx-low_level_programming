#include "main.h"

/**
 * alloc_grid - function returns pointer to a 2 dimensional array
 * @width: array 1
 * @height: array 2
 *Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **memory;
	int i;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	memory = malloc(sizeof(int *) * height);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		memory[i] = malloc(sizeof(int) * width);

		if (memory[i] == NULL)
		{
			free(memory);
			for (k = 0; k <= height; k++)
				free(memory[k]);
			return (NULL);
		}

		for (k = 0; k < width; k++)
			memory[i][k] = 0;
	}
	return (memory);
}
