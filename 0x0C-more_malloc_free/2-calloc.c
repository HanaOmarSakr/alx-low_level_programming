#include <stdlib.h>
#include "main.h"
/**
 * _calloc - ...
 * @nmemb: ...
 * @size: ...
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	p = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (ptr);
}

