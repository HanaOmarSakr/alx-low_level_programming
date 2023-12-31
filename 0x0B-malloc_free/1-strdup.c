#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - ...
 * @str: ...
 * Return: ..
 */

char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *new;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	new = malloc(sizeof(*str) * i);

	if (new == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		new[j] = str[j];
	}
	new[j] = '\0';
	return (new);
}

