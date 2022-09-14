#include "main.h"
/**
 * print_to_98 - count up or down to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			if (i == 98)
			{
				;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			if (i == 98)
			{
				;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}

