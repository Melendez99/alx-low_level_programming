#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory
 * @b: value
 * Return: returns allocated memory successfully
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	else
		return (memory);
}
