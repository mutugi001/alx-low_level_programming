#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog- prints a struct
 * @d:the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (d->name != NULL)
	{
		printf("Name: %s", d->name);
	}
	else
	{
		printf("Name: (nil)");
	}
	if (d->age != NULL)
	{
		printf("Age: %d", d->age);
	}
	else
		print("Age: (nil)");
	if (d->owner != NULL)
	{
		printf("Owner: %s", d->owner);
	}
	else
	{
		print("Owner: (nil)");
	}
}

