#include "main.h"

/**
 * _strcpy - function copies string
 * @dest: pointer
 * @char: pointer
 * Return: 0 always
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int i = 0;

	while (*(src + 1) != '\0')
	{
		m++;
	}
	for ( ; i < m ; i++)
	{
		dest[i] = src[i];
	}
	dest[m] = '\0';
	return (dest);
}
