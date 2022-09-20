#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string to stdout
 * @str: string
 *
 */
void print_rev(char *str)
{
	int i = 0, v = 0;

	while (*(str + i) != '\0')
	{
		v++;
	}
	while (v--)
	{
		_putchar(*(str + v));
	}
	_putchar('\n');
}
