#include <stdio.h>
/**
 * main-Entry point
 * Description : 'small and caps aplhas'
 * Return:Always 0 (Success)
 */

int main(void)
{
	char sl = 'a';
	char cl = 'A';

	while (sl <= 'z')
		{
		putchar(sl);
		sl++;
		}
	while (cl <= 'Z')
		{
		putchar(cl);
		cl++;
		}
	putchar('\n');

	return (0);
}
