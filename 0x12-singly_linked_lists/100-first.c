#include <stdio.h>

void __attribute__((constructor)) premain(void);
/**
 * premain - print string before main
 * function is executed
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my");
	printf("house upon my back!\n");
}
