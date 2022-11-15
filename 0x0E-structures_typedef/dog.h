#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog- a struct with dog details
 * @name:name of dog
 * @age:age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char  *owner;
};
/**
 * dog_t - typefe for struct do
 */
typedef struct dog dog_t;
#endif
