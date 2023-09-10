#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - function allocates memory
 *@b: size of memory
 *Return: returns pointer to new allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	else
		return (memory);
}
