#include "function_pointers.h"
/**
 * array_iterator- executes a function on each element
 * @array: array given
 * @size:size of array
 * @action:pointer to functio
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
