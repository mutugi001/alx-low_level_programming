#include <stdio.h>
/**
 * main-Entry point
 * Description:'hexa format'
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char ch = 'a'

	while (n <= 9)
	{
	putchar(n);
	n++;
	}
	while (ch <= 'f')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
