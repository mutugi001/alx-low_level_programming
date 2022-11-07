#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num- check string if digit
 * @str:string
 * Return:0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main- adds nums
 * @argc:arg count
 * @argv: arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	int num;

	for (; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			num = atoi(argv[i]);
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%i\n", sum);
	return (0);
}


