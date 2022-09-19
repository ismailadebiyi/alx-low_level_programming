#include "main.h"
/**
 * _strlen get the length of a string
 * @s: string
 * Return: value of length
 */
int _strlen(char *s)
{
	int i, v = 1;

	for (i = 0; i <= *s; i++)
	{
		v++;
	}
	return (v);
}
