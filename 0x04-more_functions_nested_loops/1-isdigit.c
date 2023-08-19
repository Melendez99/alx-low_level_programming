#include "main.h"

/**
 * _isdigit - function tests for digits 0 - 9
 *@c: check parameter
 *Return: returns 1, 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
