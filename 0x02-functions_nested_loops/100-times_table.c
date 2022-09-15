#include "main.h"
/**
 *print_times_table - compute multiplication table of 0-n
 * @n: no of multiplication matrix
 */
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{
		;
	}
	else
	{
		int i, j, s;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				{
					_putchar(',');
					_putchar(' ');
					s = (i * j);
					if (s < 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if ((s > 9) && (s <= 99))
					{
						_putchar(' ');
						_putchar((s / 10) + '0');
					}
					else
					{
						_putchar((s / 100) + '0');
						_putchar(((s / 10) % 10) + '0');
					}
				_putchar((s % 10) + '0');
				}
			_putchar('\n');
		}
	}
}
