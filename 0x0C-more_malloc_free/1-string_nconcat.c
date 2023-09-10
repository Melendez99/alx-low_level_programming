#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: memory value(bytes)
 * Return: returns pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l = 0; s1[l] != '\0'; l++)
		s1len++;
	for (l = 0; s2[l] != '\0'; l++)
		s2len++;

	memory = malloc(sizeof(char) * (s1len + n) + 1);
	if (memory == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (l = 0; s1[l] != '\0'; l++)
			memory[l] = s1[l];
		for (l = 0; s2[l] != '\0'; l++)
			memory[s1len + l] = s2[l];
		memory[s1len + l] = '\0';

	}
	else
	{
		for (l = 0; s1[l] != '\0'; l++)
			memory[l] = s1[l];
		for (l = 0; l < n; l++)
			memory[s1len + 1] = s2[l];
		memory[s1len + 1] = '\0';

	}
	return (memory);
}
