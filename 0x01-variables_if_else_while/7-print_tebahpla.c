#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function list all the alphabelt in small letter in reverse.
 * Return: 0
 */
int main(void)
{
int n = 122;
do {
putchar(n);
n--;
} while (n > 96);
putchar(10);
return (0);
}
