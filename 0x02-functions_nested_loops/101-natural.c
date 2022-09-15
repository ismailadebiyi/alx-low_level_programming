#include <stdio.h>
/**
 * main - function that compute and print the sum of multipules of
 * 5 and 3 below 1024
 * Return: 0 Always true
 *
 */
int main(void)
{
	int i, s = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) || (i % 5))
		{
			s+=i;
		}
	}
	printf("%lu", s);
}
