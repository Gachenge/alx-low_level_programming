#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - another gu
 * @name: bosco
 * @age: mzae
 * @owner: kipii
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog;

	for (i = 0; name[i]; i++)
		;
	i++;
	for (j = 0; owner[j]; j++)
		;
	j++;
	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
		free(dog);
	}

	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		return (NULL);
		free(dog);
	}
	else
		for (k = 0; k < i; k++)
			dog->name[k] = name[k];

	dog->owner = malloc(sizeof(char) * j);
	if (dog->owner == NULL)
	{
		return (NULL);
		free(dog);
	}
	else
		for (k = 0; k < j; k++)
			dog->owner[k] = owner[k];

	dog->age = age;
	return (dog);
}
