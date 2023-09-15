#include "variadic_functions.h"

/**
 *sum_them_all - calculates the sum of all its parameters
 *@n: number of arguments passed to the function
 *
 *Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int v;
	int sum = 0;
	va_list arg;

	va_start(arg, n);

	for (v = 0; v < n; v++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
