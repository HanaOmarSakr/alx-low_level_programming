#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ..
 * @n: ...
 * Return: ..
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j = 0;
	int k = 0;
	unsigned int m;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (j < n || j == n)
		n = j;

	new = malloc(sizeof(char) * (i + n + 1));

	if (new == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		new[k] = s1[k];

	for (m = 0; m < n; m++)
		new[k + m] = s2[m];

	new[k + m] = '\0';
	return (new);

}
