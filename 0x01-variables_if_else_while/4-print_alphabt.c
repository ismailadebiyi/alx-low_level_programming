#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function list all the alphabelt in small letter without a and q.
 * Return: 0
 */
int main(void)
{
int n;
for (n = 97; n < 123; n++)
{
if ((n == 101) || (n == 113))
{
;
}
else
{
putchar(n);
}
}
putchar(10);
return (0);
}
