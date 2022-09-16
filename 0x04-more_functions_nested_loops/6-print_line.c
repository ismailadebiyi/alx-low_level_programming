#include "main.h"
/**
 * print_line - function that print _ n times
 * @n: Number of times to print _
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
}
