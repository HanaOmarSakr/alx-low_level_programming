#include "dog.h"

/**
 * strdup - ...
 * @dest: ..
 * @src: ..
 * Return: dest
 *

char *strdup(char *dest, char *src)
{
	int i;
	int l = 0;

	while (src[l] != '\0')
		l++;
	for (int i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
*/

/**
 * init_dog - ...
 * @d: ..
 * @name: ..
 * @age: ..
 * @owner: ..
 * Return: ..
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
