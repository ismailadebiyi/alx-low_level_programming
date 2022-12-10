#include <stdio.h>


int is_palindrome(int n)
{
	int reverse = 0, remainder, original;
	original = n;
	
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	return (original == reverse);
}

int main(void)
{
	int i, j, product, largest_palindrome = 0;
	FILE *fptr;
	fptr =fopen("102-result","w");	
	
	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
				largest_palindrome = product;
		}
	}
	fprintf(fptr,"%d\n", largest_palindrome);
	fclose(fptr);
	return (0);
}
