#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function list all the alphabelt in small letter without a and q.
 * Return: 0
 */
int main(void)
{
int n = 97;
do {
if (n != 101 || n != 113)
{
putchar(n);
n++;
}
} while (n < 123);
putchar(10);
return (0);
}
