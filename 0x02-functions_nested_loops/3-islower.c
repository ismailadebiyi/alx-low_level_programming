#include "main.h"
#include <ctype.h>
/**
 * _islower - method to check if a given letter is in lower case
 * @c: letter to check.
 * Return: 1 if true or 0 if false
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
		return (0);
}
