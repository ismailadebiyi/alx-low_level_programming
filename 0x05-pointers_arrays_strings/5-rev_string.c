#include "main.h"
#include <stdio.h>
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
		printf("%d\n", i);
	}
	while (i--)
	{
		
		*(s + v) = s[i];
		printf("%d      %d\n", i, v);
		v++;
	}
}
