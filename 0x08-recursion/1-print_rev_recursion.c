#include "main.h"
/**
 * _print_rev_recursion- prints string inreverse
 * @s:string to print
 */
void _print_rev_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	if (s <= n)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
