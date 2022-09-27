#include "main.h"
/**
 * _strchr - pointer of the first occurence of a string
 * @s: full string
 * @c: character to check for
 * Return: pointer 
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
