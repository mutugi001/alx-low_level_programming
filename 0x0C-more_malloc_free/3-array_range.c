#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * array_range- creates an array of intergers
 * @min: minimum int
 * @max:max int
 * Return:pointer to array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; p[i] <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
