#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	if (d->name == NULL || d->owner == NULL)
	{

	free(d->name);
	free(d->owner);
	free(d);
	}
}


