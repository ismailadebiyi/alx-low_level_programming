#include <stdio.h>
/**
 * main - compute prime factors
 * Return: 0
 */
int main(void)
{
	long i, r;
	long n = 612852475143;

	while (n != 1)
	{
		for (i = 2; i <= n; i++)
		{
			r = n % i;
			if (r == 0)
			{
				n = n / i;
				break;
			}
			else
			{
				;
			}
		}
	}
	printf("%ld\n", i);
	return (0);
}
