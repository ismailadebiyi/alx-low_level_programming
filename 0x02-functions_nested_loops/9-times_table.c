#include "main.h"
#include <math.h>
/**
 * times_table - compute multiplication table of 0-9
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int s = (i * j);

			if (j == 0)
			{
				_putchar(s + '0');
			}
			else
			{
				if (s > 9)
				{
					_putchar(',');
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
