#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: string
 * Return: returns pointer
 */

char *cap_string(char *n)
{
	int cap = 0;

	while (n[cap])
	{
		while (!(n[cap] >= 'a' && n[cap] <= 'z'))
		cap++;

		if (cap[n - 1] == ' ' ||
		n[cap - 1] == '\t' ||
		n[cap - 1] == '\n' ||
		n[cap - 1] == ',' ||
		n[cap - 1] == ';' ||
		n[cap - 1] == '.' ||
		n[cap - 1] == '!' ||
		n[cap - 1] == '?' ||
		n[cap - 1] == '"' ||
		n[cap - 1] == '(' ||
		n[cap - 1] == ')' ||
		n[cap - 1] == '{' ||
		n[cap - 1] == '}' ||
		n == 0)
			n[cap] -= 32;
		cap++;
	}
	return (n);
}
