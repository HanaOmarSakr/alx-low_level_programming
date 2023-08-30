/**
 * strdup - ...
 * @dest: ..
 * @src: ..
 * Return: dest
 */

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
	if (d == NULL || name == NULL || age == NULL || owner == NULL)
		return;

	strdup(d->name, name);
	d->age = age;
	strdup(d->owner, owner);
}
