#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the doggy
 * @d: the dog pointed
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("nil");
		if (d->age)
			printf("%f\n", d->age);
		else
			printf("nil");
		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("nil");
	}
}
