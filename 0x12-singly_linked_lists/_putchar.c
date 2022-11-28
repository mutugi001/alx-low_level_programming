#include <unistd.h>
/**
 * _putchar- prints to stdout
 * @c: character to print
 * Return: character c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
