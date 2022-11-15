#include "dog.h"
/**
 * init_dog - initialize struct dog
 * @d:index of dog
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
