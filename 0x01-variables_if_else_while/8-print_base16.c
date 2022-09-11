#include <stdio.h>
/**
 * main - function to print hexdecimal numbers
 * Return: 0 
 */
int main(void)
{
for (int i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i+48);
}
else
{
putchar(i+87);
}
}
putchar(10);
return (0);
}
