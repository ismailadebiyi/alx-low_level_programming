#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: string
 * 
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < *(str + i); i++)
	{
		_putchar(i);
	}
}
