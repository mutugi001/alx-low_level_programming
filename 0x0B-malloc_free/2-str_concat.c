#include "main.h"
#include <stdlib.h>
/**
 * _strlen- length of array
 * @s: array or string
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat- concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * Return:pointer to s1
 */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = _strlen(s1) + _strlen(s2) + 1;
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		dst[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		dst[i] = s2[j];
		i++;
	}
	return (dst);
}
