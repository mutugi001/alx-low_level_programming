#include "main.h"
/**
 * reverse_array- reversing content of an array
 * @a:the array
 * @n:number of elements
 * Return: a in reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
