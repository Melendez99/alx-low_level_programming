#include "main.h"

/**
 * _strstr - finds occurence of a substring
 * @haystack: string
 * @needle: substring
 * Return: 0 always
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
