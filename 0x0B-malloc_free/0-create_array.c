#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * create_array - fill the first n bytes of memory pointed to by s with b
 * @c: constant to be filled with
 * @size: number of byte to be filled
 * Return: pointer s
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i != size; i++)
	{
		s[i] = c;
	}
	return (s);
}
