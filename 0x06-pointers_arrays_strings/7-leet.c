#include "main.h"

/**
 * leet - function that encodes a string
 * @n: string value
 * Return: n
 */

char *leet(char *n)
{ 
	int c;
	int d;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4455007711";

	for (c = 0; n[c] != '\0' ; c++)
	{
		for (d = 0 ; d < 10 ; d++)
		{
			if (n[c] == s1[d])
			{
				n[c] = s2[d];
			}
		}
	}
	return (n);
}
