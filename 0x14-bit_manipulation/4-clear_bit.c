#include "main.h"

/**
 * clear_bit - set value for a bit to 0 at a given index
 * @n: value pointer
 * @index: value index
 * Return: 1 or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
