#include "dog.h"

/**
 * init_dog - ...
 * @d: the dog to init
 * @name: ..
 * @age: ..
 * @owner: ..
 * Return: ..
 * Description: ..
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

