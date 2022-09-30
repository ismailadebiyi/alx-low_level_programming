#include "main.h"
/**
 * _writechar - write all char
 * @s: char to be written
 */
void _writechar(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_writechar(s + 1);
	}
}

/**
 * main - print all argument
 * @argc: Argument count
 * @argv: Argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			_writechar(argv[i]);
			_writechar("\n");
		}
	}
	else
	{
		_writechar("No command");
	}
	_writechar("\n");
	return (0);
}
