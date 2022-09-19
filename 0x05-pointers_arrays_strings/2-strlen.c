#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: string
 * Return: value of length
 */
int _strlen(char *s)
{
	int i, v = 0;

	for (i = 0; i < *(s + v); i++)
	{
		v++;
	}
	return (v);
}
