#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates
 * @size: input
 * @c: input
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (0);
	}
	while (size--)
		n[size] = c;

	return (n);
}
