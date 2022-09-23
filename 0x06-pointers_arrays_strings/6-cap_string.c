#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @s: character
 * Return: character
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!(s[i] >= 'a') && (s[i] <= 'z'))
		{
			;
		}
		else
		{
			if (i == 0 ||
					s[i - 1] == ' ' ||
					s[i - 1] == '\t' ||
					s[i - 1] == '\n' ||
					s[i - 1] == ',' ||
					s[i - 1] == ';' ||
					s[i - 1] == '.' ||
					s[i - 1] == '!' ||
					s[i - 1] == '?' ||
					s[i - 1] == '"' ||
					s[i - 1] == '(' ||
					s[i - 1] == ')' ||
					s[i - 1] == '{' ||
					s[i - 1] == '}')
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
