#include "main.h"
/**
 * more_numbers- prints 10 times the nums
 * Return: Always 0
 */

void more_numbers(void)
{
	int t;
	int a;

	for (t = '0'; t <= '9'; t++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
	_putchar('\n');
	}
}
