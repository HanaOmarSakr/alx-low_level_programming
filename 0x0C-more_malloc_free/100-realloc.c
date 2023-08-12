#include <stdlib.h>
/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ..
 * @new_size: ...
 * Return: ..
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i;
	char *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = old_size < new_size ? old_size : new_size;

	p = (char *)ptr;

	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = p[i];

	free(ptr);

	return (new_ptr);
}

