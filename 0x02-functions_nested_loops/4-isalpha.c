#include "main.h"
#include <ctype.h>
/**
 * _isalpha - method to check if a given letter is in alphabet
 * or number
 * @c: letter to check.
 * Return: 1 if true or 0 if false
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
		return (0);
}

