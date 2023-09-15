#include "main.h"

/**
 * create_array - creates array
 * @size: size of array
 * @c: character to store array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	
	for (a = 0; a < size; a++)	
		array[a] = c;
	return (array);
}
