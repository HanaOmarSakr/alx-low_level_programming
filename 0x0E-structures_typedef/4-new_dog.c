#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a func
 * @s: ..
 * Return: ..
 */

int _strlen(const char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * _strcopy - a func
 * @s: ..
 * @d: ...
 * Return: ..
 */

char _strcopy(char *d, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		s[i] = d[i];
	d[i] = '\0';
	return (d);
}

/**
 * new_dog - func
 * @name: ..
 * @age: ..
 * @owner: ..
 * Return: ..
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
