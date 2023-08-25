#include "main.h"
#include <string.h>


/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int c;

	for (c = 0 ; c < n && *src != '\0' ; c++)
	{
		dest[len + c] = src[c];
		src++;
	}
	dest[len + c] = '\0';
	return (dest);
}
