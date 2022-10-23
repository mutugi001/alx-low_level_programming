#include "main.h"
/**
 * _isdigit- checks for a digit
 * @c: value to be checked
 * Return: 1 if a num, 0 if not
 */

int _isdigit(int c)

{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
