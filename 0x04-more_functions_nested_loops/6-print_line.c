#include "main.h"
/**
 * print_line- print line in terminal
 * @n: number of times
 * Return: Always 0
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}

