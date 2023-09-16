#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 Sucessfully
 */
int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	int arg;
	char n;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (!p)
	{
		printf("Error\n");
		exit(99);
	}

	n = *argv[2];

	if ((n == '/' || n == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	arg = p(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
