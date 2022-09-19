#include "main.h"
/**
 * _strlen get the length of a string
 * @s: string
 * Return: value of length
 */
int _strlen(char *s)
{
	int v =0;

	while (*s != '\0')
	{
		v++;
	}
	return (v);
}
