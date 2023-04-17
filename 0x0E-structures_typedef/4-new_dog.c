#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
	{
		return (NULL);
	}
	doggo->name = malloc(strlen(name) + 1);
	doggo->owner = malloc(strlen(owner) + 1);
	if (doggo->name == NULL)
	{
		free(doggo->name);
		return (NULL);
	}
	doggo->name = name;
	if (doggo->owner == NULL)
	{
		free(doggo->owner);
		return (NULL);
	}
	doggo->owner = owner;
	doggo->age = age;
	return (doggo);
}
