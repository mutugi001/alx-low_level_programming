#include "main.h"
/**
 * times_table- prints the 9 multiplication table
 */
void times_table(void)
{
	int n, p, m;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '10');
		}
		_putchar('\n');
	}
}
