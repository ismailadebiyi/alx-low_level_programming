#include "main.h"
/**
 * _strcpy - copy string from crc to destination
 * @dest: destination
 * @src: source
 * return: value of the destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return dest;
}
