#include "main.h"
/**
 * print_alphabet_x10- prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int t;
	char la;

	for (t = 0; t <= 9; t++)
	{
		for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
		_putchar('\n');
	}
}
