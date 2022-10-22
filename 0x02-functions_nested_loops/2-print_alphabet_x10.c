#include "main.h"
/**
 * print_alphabet_x10- prints 10 times the alphabet
 * Return:Always 0
 */
void print_alphabet_x10(void)
{
	int t = 0;
	char la;

	while (t < 10)
		for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	t++;
	_putchar('\n');
	return(0);
}
