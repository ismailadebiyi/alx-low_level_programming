#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * chkchg - method to check change
 * @c: the cent
 * Return: the change
 */
int chkchg(int c)
{
	if (c == 1)
	{
		return (1);
	}
	if (c >= 25)
	{
		return ((c / 25) + chkchg(c % 25));
	}
	if (c >= 10)
	{
		return ((c / 10) + chkchg(c % 10));
	}
	if (c >= 5)
	{
		return ((c / 5) + chkchg(c % 5));
	}
	if (c >= 2)
	{
		return ((c / 2) + chkchg(c % 2));
	}
	return (0);
}
/**
 * main - main function to calculate change
 * @argc: Argument count
 * @argv: Argument array
 * Return: 0 if true and 1 if false
 */
int main(int argc char *argv[])
{
	int ch;

	if (argc == 2)
	{
		if (atoi(atgv[1]) > 0)
		{
			ch = chkchg(atoi(argv[1]));
			printf("%d\n", ch);
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
