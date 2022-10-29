#include "main.h"

/**
 * binary_to_unit - function that convert a binary number to decimal
 * @b: pointer to the string of 0 and 1
 * Return: the converted number, or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
*/

unsigned int binary_to_unit(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != 0 || b[i] != 1)
		{
			return (0);
		}
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}
