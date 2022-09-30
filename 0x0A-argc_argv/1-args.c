#include "main.h"
/**
 * main - print numbers of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (!argv[argc])
	{
		_putchar(((argc - 1) + '0'));
	}
	_putchar('\n');
	return (0);
}
