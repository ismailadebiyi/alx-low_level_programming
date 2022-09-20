#include "main.h"
#include <stdio.h>
/**
 * print_array - print array from pointer
 * @a: array pointer
 * @n: array index
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		int i = 0;
		
		while (i < n)
		{
			if (i < (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
			i++;
		}
	}
	printf("\n");
}
