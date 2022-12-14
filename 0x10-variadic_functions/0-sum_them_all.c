#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- sum of all parameters given
 * @n:amount of arguements
 * Return:sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
