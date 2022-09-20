#include "main.h"
/**
 * rev_string - reverse the character of an array string
 * @s: array string pointer
 */

void rev_string(char *s)
{
	int i = 0, v = 0;

	while (*(s + i) != '\0')
	{
		i++;
		_putchar(i + '0');
	}
	while (i--)
	{
		_putchar(i + '0');
		*(s + v) = s[i];
		v++;
		_putchar(v + '0');
	}
}
