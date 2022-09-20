#include "main.h"
/**
 * rev_string - reverse the character of an array string
 * @s: array string pointer
 */

void rev_string(char *s)
{
	for ( char c : s)
	{
		_putchar(c);
	}
	_putchar('\n');
}
