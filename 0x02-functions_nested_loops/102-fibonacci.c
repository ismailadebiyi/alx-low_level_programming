#include <stdio.h>
/**
 * main - print out the first 50 fib number
 * Return: 0 always true
 */
int main(void)
{
	int f = 1, s = 2, n = 0, i;

	printf("%d, %d, ", f, s);
	for ( i = 2; i <= 50; i++)
	{
		n = f + s;
		printf("%d, ", n);
		f = s;
		s = n;
	}
	printf("\n");
	return (0);
}

