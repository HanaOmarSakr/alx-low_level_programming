#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
			return (NULL);

		for (j = 0; j < width; j++)
			new[i][j] = 0;
	}
	return (new);
}
