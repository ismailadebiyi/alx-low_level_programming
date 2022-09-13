#include "main.h"
/**
 * print_sign - check for neagative, nun, and positive
 * numbers
 * @n: Number to check
 * Return: 1, 0, or -1 for nagegative, neutral, positive number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}

