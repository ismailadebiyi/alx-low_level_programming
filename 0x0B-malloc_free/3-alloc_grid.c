#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * alloc_grid -returns a pointerof a newly allocated
 * 2-dimensional array
 * @width: row
 * @height: column
 * Return: NULL if Error, else Pointer to allocated array
 */
int **alloc_grid(int width, int height)
{
	int **a, i = 0, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	a = (int **) malloc(sizeof(int *) * height);

	if (a != NULL)
	{
		for (; i < height; i++)
		{
			a[i] = (int *) malloc(sizeof(int) * width);
			if (a[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					a[i][j] = 0;
				}
			}
			else
			{
				while (i >= 0)
				{
					free(a[i]);
					i--;
				}
				free(a);
				return (NULL);
			}
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}
