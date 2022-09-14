#include "main.h"
/**
 * times_table - compute multiplication table of 0-n
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
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
				{
					int s = (i * j);
					if (j == 0)
					{
						_putchar(s + '0');
					}
					else
					{
						if (s > 99)
						{
							_putchar(',');
							_putchar(' ');
							_putchar((s / 100) + '0');
							_putchar(((s / 10) % 10) + '0');
							_putchar((s % 10) + '0');
						}
						else if ((s > 9) && (s <= 99))
						{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							_putchar((s / 10) + '0');
							_putchar((s % 10) + '0');
						}
						else
						{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							_putchar(s + '0');
						}
					}
				}
			_putchar('\n');
		}
	}
}

