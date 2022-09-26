#include "main.h"
/**
 * _memset - fill the first n bytes of memory pointed to by s with b 
 * @s: memory pointer
 * @b: constant to be filled with
 * @n: number of byte to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
