#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - find the sum of argurment
 * @argc: agurgment count
 * @argv: argument array
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int i, j, s = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j] == 0))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
