#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function list all the alphabelt in  both small and capital letter.
 * Return: 0
 */
int main(void)
{
int n = 97;
int i = 65;
do {
putchar(n);
n++;
}
while (n < 123);
do {
putchar(i);
i++;
}while (i < 91);
putchar(10);
return (0);
}
