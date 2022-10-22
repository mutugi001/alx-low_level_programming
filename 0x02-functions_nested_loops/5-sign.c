#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n:thr number
 * Return:1 if greater than "0" ,0 if "0" and -1 if less than "0"
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (1);
		_putchar('+');
	}
}
