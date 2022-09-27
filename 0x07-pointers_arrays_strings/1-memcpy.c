#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number ob byte to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while(n)
	{
		*(dest + (n - 1)) = *(src + (n - 1));
		n--;
	}
	return (dest);
}
