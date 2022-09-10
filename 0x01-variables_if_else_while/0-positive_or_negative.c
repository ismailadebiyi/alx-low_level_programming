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
  printf(n "is positive\n");   
}
else
{
  printf(n "is negative\n");
}
return (0);
}
