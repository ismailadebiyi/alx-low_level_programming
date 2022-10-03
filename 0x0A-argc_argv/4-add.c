#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - addition of arguments
 * @argc: number of arguments counts
 * @argv: argument array
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int s = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
