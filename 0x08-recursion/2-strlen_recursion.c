#include "main.h"

/**
 * _strlen_recursion - prints lenght of a string
 * @s: string
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	
	return (lenght);
}
