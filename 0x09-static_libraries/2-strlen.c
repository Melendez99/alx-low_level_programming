#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string to be counted
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int m;
	int count = 0;

	for (m = 0 ; s[m] != '\0' ; m++)
		count++;
	return (count);
}
