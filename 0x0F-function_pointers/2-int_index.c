#include "function_pointers.h"
/**
 * int_index-searches for indexof an int
 * @array:array
 * @size:size of array
 * @cmp:pointer to function
 * Return:Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array)
		return (-1);

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
}
