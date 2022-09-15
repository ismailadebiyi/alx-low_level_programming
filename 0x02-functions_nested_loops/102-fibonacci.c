#include <stdio.h>
/**
 * main - print out the first 50 fib number
 * Return: 0 always true
 */
int main(void)
{
	long int f = 1, s = 2, n = 0;
	int i;

	printf("%ld, %ld, ", f, s);
	for (i = 2; i < 50; i++)
	{
		n = f + s;
		if ( i == 49)
		{
			printf("%ld", n);
		}
		printf("%ld, ", n);
		f = s;
		s = n;
	}
	printf("\n");
	return (0);
}

