#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function takes in random number and check if its negative or positive
 * Return: 0  
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{ 
  printf("%d is positive\n", n);   
}
else
{
  printf("%d is negative\n", n);
}
return (0);
}
