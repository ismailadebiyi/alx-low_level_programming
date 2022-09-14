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
			_putchar(s + '0');
			if (j == 9)
			{
				;
			}
			_putchar(',');
			_putchar(' ');
			if (s > 10)
			{
				;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
