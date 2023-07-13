#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: input
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
