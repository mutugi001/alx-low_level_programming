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
	int i;
	int *p;
	int c;

	c = min;

	if (min > max)
	{
		return (0);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (0);

	for (i = 0; i <= max - min; i++)
	{
		p[i] = c;
		c++;
	}
	return (p);
