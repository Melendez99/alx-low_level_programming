#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: checking parameter
 * Return: returns 1, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
