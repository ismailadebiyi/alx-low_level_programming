#include <stdio.h>
/**
 * main - function to list double figure that are unique
 * Return: 0
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i >= j)
{
;
}
else
{
putchar(i + 48);
putchar(j + 48);
putchar(44);
putchar(32);
}
}
}
return (0)
}
