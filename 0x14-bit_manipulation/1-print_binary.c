#include "main.h"

/**
 * print_binary -print the binary of a no
 * @n: no to be converted
 */

void print_binary(unsigned int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
