#include "main.h"
/**
 * _strlen_recursion - print the string length 
 * @s: string to check
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}    
}
