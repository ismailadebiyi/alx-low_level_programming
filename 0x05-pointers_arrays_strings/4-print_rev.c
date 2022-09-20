#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string to stdout
 * @str: string
 *
 */
void print_rev(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
