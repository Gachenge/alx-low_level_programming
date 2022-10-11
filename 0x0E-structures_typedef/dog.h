#ifndef DOG_H
#define DOG_H
/**
 * struct dog - feature dog
 * @name: woof
 * @age: how old
 * @owner: who own
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */