#include "main.h"

/**
 * create_array - creates
 * @size: input
 * @c: input
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *n = malloc(size*sizeof(char));

	if (size == 0 || n == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}
