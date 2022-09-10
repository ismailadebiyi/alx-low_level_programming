#include<stdio.h>
/**
 * main - function that list the size of types
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %zu byte(s),\n" sizeof(char));
printf("Size of a int: %zu byte(s),\n" sizeof(int));
printf("Size of a long int: %zu byte(s),\n" sizeof(long int));
printf("Size of a long long int: %zu byte(s),\n" sizeof(double));
printf("Size of a float: %zu byte(s),\n" sizeof(float));
return (0);
}
