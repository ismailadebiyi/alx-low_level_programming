#include "main.h"
/**
 * swap_int - swap pointer a to pointer b and viceversa
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*a = *temp;
	*b = *a;
	*temp = *b;
}

