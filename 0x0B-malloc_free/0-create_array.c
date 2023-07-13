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

	if (size == 0)
	{
		return (NULL);
	}
	char *n = malloc(size * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i =0; i < size; i++)
		n[i] = c;

	return (n);
}
