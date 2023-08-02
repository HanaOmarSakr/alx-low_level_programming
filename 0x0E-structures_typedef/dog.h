#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: ...
 * @age: ..
 * @owner: ..
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#define NULL ((void *)0)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
