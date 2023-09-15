#include "main.h"

/**
 * _strdup - copies string to new space
 * @str: string to copy
 * Return: pointer to memory
 */

char *_strdup(char *str)
{
	char *c;
	int m = 0;
	int a;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		m++;

	c = malloc(sizeof(char) * m + 1);

	if (c == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		c[a] = str[a];

	return (c);
}
