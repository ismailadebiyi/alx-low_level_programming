#include "main.h"
#include <ctype.h>
/**
 * _islower - method to check if a given letter is in lower case
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}else
	{
		return(0);
	}
}
