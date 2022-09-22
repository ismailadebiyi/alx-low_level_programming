#include "main.h"
/**
 * _strncat - append two string into dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: No of source bit to copy
 * Return: dest as the default pointer
 */
char *_strcat(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (dest[i++] != '\0')
	{
		d++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[d++] = src[i];
	}
	dest[d++] = '\0';

	return (dest);
}

