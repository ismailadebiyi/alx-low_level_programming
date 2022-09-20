#include "main.h"
/**
 * puts_half - print the last half of a string
 * @str: string sample
 */
void puts_half(char *str)
{
	int len, i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{

		len = i - (i / 2);
	}
	else
	{
		len = i - ((i - 1) / 2);
	}
	while (i > len)
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');


}
