#include "main.h"

/**
 * get_endianness - check for endianess
 * Return: 0 if big endian or 1 for smaill endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c == 1)
	{
		return (1);
	}
	return (0);
}
