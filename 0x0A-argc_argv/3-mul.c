#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two nums
 * @argc:arg count
 * @argv:arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int product;
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%i\n", product);
		return (0);
	}
}
