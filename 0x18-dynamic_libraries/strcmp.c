#include "main.h"
/**
 * _strcmp - compared two string
 * @s1: first string pointer
 * @s2: seconf string pointer
 * Return: 0 if string are same; + if string a is bigger and - if otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, l, f = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i >= j)
	{
		l = i;
	}
	else
	{
		l = j;
	}
	while (f < l)
	{
		if (s1[f] == s2[f])
		{
			;
		}
		else
		{
			return (s1[f] - s2[f]);
		}
		f++;
	}
	return (0);
}

