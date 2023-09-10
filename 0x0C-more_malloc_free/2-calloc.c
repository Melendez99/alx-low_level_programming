#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = calloc(nmemb, size);
	if (memory == NULL)
		return (NULL);
	else
		return (memory);
}
