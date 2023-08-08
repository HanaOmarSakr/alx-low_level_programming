#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - ...
 * @height: ...
 * @width: ...
 * Return: ...
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;

	int **new;

	if (width <= 0 || height <= 0)
		return (NULL);

	new = malloc(height * sizeof(int *));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		new[i] = malloc(width * sizeof(int));
		if (new[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(new[i]);
			free(new);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			new[i][j] = 0;
	}
	return (new);
}
