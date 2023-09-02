#include "main.h"

/**
 * _strcmp - compare string
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0 ; s1[c] != '\0' || s2[c] != '\0' ; c++)
	{
		if (s1[c] != s2[c])
		{
			if (s1[c] < s2[c])
				return (s1[c] - s2[c]);
			else if (s2[c] < s1[c])
				return (s1[c] - s2[c]);
		}
	}
	return (0);
}
