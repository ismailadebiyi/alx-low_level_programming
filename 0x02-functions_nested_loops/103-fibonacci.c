#include <stdio.h>
/**
 * main - print out the sum of the even no  fib number
 * Return: 0 always true
 */
int main(void)
{
	long int f = 1, s = 2, n = 0, e = 2;

	n = f + s;
	while (n <= 4000000)
	{
		f = s;
		s = n;
		n = f + s;
		if ((n % 2) == 0)
		{
			e += n;
		}
	}
	printf("%ld\n", e);
	return (0);
}

