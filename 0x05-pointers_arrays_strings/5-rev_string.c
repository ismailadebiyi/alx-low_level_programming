#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse the character of an array string
 * @s: array string pointer
 */

void rev_string(char *s)
{
	int i = 0, v = 0;
	char tmp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i--)
	{
		tmp = *(s + i);
		printf("%c\n", tmp);
		*(s + i) = s[v];
		s[v] = tmp;
		v++;
	}
}
