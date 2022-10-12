#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc
 * @d: point to dog
 */

void free_dog(dog_t *d)
{
	int i, j;

	for (i = 0; d->name[i]; i++)
	{
		free(d->name);
		free(d);
	}
	for (j = 0; d->owner[j]; j++)
	{
		free(d->owner);
		free(d);
	}
	free(d);
}
