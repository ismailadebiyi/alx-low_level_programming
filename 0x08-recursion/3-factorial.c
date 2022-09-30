#include "main.h"
/**
 * factorial - find the factorial of a number n
 * @n: factorial of number
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
