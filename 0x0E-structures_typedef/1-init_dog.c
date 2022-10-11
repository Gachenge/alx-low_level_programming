#include "dog.h"

/**
 * init_dog - initialise
 * @d: the structure
 * @name: the name
 * @age: how old
 * @owner: who own
 * Return: nil
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
