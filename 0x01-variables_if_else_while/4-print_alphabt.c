#include <stdio.h>
/**
 * main-Entry point
 * Description:'print except for e and q'
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if ((ch != 'e' && ch != 'q') && ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	}
	putchar('\n');
	return (0);
}
