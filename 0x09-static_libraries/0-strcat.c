#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int c;

	for (c = 0 ; dest[c] != '\0' ; c++)
		destlen++;
	for (c = 0 ; src[c] != '\0' ; c++)
		srclen++;

	for (c = 0 ; c <= srclen ; c++)
		dest[destlen + c] = src[c];
	return (dest);
}
