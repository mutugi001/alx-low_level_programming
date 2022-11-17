#include "function_pointers.h"
/**
 * array_iterator- executes a function on each element
 * @array: array given
 * @size:size of array
 * @action:pointer to functio
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
