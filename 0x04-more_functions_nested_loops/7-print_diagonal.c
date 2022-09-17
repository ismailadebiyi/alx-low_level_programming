#include "main.h"
/**
 * print_diagonal - print \ n times
 * @n: the number to print \
 */ 
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			if ( i > 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');

			_putchar('\n');
		}
	}
}

