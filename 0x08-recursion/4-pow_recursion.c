#include "main.h"
/**
 * _pow_recursion - find the power of a number
 * @x: Number
 * @y: Power
 * Return: Answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
