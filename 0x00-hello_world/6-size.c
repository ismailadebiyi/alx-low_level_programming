#include<stdio.h>
/**
 * main - function that list the size of types
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(double));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
