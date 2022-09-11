#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function list frpm 0-9 using putchar function.
 * Return: 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
putchar(44);
putchar(32);
}
return (0);
}
