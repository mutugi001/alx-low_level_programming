#include "function_pointers.h"
/**
 * print_name- printing a name
 * @name:to be printed
 * @f:pointer to function
 */
void print_name(char *name, void (*f)(char *));
{
	if (!name || !f)
		return;
	f(name);
}
