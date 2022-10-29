#include "main.h"

/**
 * flip_bits - return the number of bit that needed to be flipped
 * @n: value pointer
 * @m: value index
 * Return: 1 or -1 if failed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bits = 0;

	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}
	return (bits);
}
