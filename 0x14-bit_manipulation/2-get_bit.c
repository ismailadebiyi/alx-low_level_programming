#include "main.h"

/**
 * get_bit - function that find a bit of a int at a given index
 * @n: the value of int
 * @index: index point
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(signed long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
