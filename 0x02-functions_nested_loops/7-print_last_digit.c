#include <math.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a given number
 * @n: given Interger
 * Return: last digit of value of n
 */
int print_last_digit(int n)
{
	int c = abs(n % 10);

	return (c + '0');
}

