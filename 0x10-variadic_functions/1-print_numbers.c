#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int v;
	va_list arg;

	va_start(arg, n);

	for (v = 0; v < n; v++)
	{
		if (!separator)
			printf("%d", va_arg(arg, int));
		else if (separator && v == 0)
			printf("%d", va_arg(arg, int));
		else
			printf("%s%d", separator, va_arg(arg, int));
	}

	va_end(arg);

	printf("\n");
}
