#include <stdio.h>

void _attribute_((constructor)) hare(void);

/**
 * hare- prints a string before the main function
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!");
}
