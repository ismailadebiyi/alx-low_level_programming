#include "main.h"
/**
 * _strpbrk - serch string
 * @s: string to check
 * @accept: check against
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j])
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
