#include "dog.h"
#include <stdlib.h>
char _strcpy(char *dest, char *src);
int _strlen(char *str);
/**
 * _strlen -length of string
 * @str:string
 * Return:length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest:destination of string
 * @src:source of string
 * Return:dest
 */
char _strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);

/**
 * new_dog - creates a new dog
 * @name:name of dog
 * @age: age of dog
 * @owner:owner of dog
 * Return:dog1
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1.name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog1.name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1.owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog1.owner == NULL)
	{
		free(dog1.owner);
		free(dog1);
		return (NULL);
	}

	dog1.name = _strcpy(dog1.name, name);
	dog1.owner = _strcpy(dog1.owner, owner);

	return (dog1);

}
