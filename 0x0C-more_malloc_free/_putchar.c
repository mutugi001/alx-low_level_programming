#include <unistd.h>
/**
 * _putchar- print to stdout
 * @c: string
 * return:Always 0
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
