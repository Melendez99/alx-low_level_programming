#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - function allocates memory
 *@b: size of memory
 *Return: returns pointer to new allocated memory
=======
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory
 * @b: value
 * Return: returns allocated memory successfully
>>>>>>> 502739d4fd9c4c881fba01d9c559fbdd2cf01369
 */

void *malloc_checked(unsigned int b)
{
<<<<<<< HEAD
	char *memory;
=======
	int *memory;
>>>>>>> 502739d4fd9c4c881fba01d9c559fbdd2cf01369

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	else
		return (memory);
}
