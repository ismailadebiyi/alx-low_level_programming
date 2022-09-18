#include "main.h"
/**
 * print_triangle - print # in a triangle form
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;
		
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if ( j > (i + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
