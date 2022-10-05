#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _strdup -returns a pointerof a newly allocated
 * string
 * @str: given string
 * Return: NULL if Error, else Pointer to allocated space
 */
char *_strdup(char *str)
{
	char *cp;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		cp[i] = str[i];
	}
	cp[len] = '\0';

	return (cp);
}

