#include "main.h"
/**
 * _strspn - number of bytes in the initial segment of s which consist only of bytes from accept
 * @s: full string
 * @accept: char to check with
 * Return: int of value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == *(accept + j))
			{
				break;
			}
		}
		if ( !*(accept + j))
		{
			break;
		}
	}
	return (i);
}
