#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing natural numbers to 98
 * @n: the number to begin
 * Return: all the numbers to 98
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

