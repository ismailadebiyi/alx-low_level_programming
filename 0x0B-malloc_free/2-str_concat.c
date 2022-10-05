#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _str_concat -returns a pointer of a newly allocated
 * concatinated string
 * @s1: given string 1
 * @s2: given string 2
 * Return: NULL if Error, else Pointer to allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *cn;
	int i, ci = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}
	cn = malloc(size(char) * len);

	if (cn == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		cn[ci++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		cn[ci++] = s2[i];
	}
	return (cn);
}
