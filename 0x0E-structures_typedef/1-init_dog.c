#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialises a dog
 * @d: structure of dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d - struct dog;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
