#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - find the producr of argurment
 * @argc: agurgment count
 * @argv: argument array
 * Return: 0 if true, 1 if false
 */
int main(int argc, char*argv[])
{
	int i, p = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			p *= atoi(argv[i]);
		}
		printf("%d\n", p);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
