#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: an array pointer of integer
 * @n: the number of array element
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i > n /2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
