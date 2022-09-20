#include "main.h"
/**
 * rev_string - reverse the character of an array string
 * @s: array string pointer
 */

void rev_string(char *s)
{
	int i = 0;

	*s = s[i];
	while (s[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
}
