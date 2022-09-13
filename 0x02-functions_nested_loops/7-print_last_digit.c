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
	_putchar(abs(n % 10));
	return (abs(n % 10));
}

