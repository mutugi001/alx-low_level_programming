#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc- allocates memory for an array
 * @nmemb:number of elements
 * @size:bytes of each
 * Return:pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
