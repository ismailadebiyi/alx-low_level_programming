#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integer
 * @min: minmum value
 * @max: maximum value
 * Return: pointer of newly created array
 */
int *array_range(int min, int max)
{
	int i, *a;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * ((max - min) + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ((max - min) + 1); i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}

