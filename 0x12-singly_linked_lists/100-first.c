#include <stdio.h>

void __attribute__((constructor)) premain(void);
/**
 * premain - print string before main
 * function is executed
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
