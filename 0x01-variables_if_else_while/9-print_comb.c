#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
int e;

for (e = 0 ; e < 10 ; e++)
{
	putchar(e);
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
