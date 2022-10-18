#include <stdio.h>
/**
 * main-Entry point
 * Description:'hexa format'
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 16)
	{
	putchar('%x' + n);
	n++;
	}
	return (0);
}
