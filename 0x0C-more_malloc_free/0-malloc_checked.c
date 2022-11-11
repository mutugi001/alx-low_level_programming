#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocates memory
 * @b:to be stored
 * Return:void
 */

void *malloc_checked(unsigned int b)
{
	void *P;

	p = malloc(b);
	if (p != NULL)
	{
		return (p);
	}
	exit(98);
}
