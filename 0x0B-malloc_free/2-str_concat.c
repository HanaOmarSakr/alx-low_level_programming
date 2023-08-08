#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - ..
 * @s1: ...
 * @s2: ...
 */

char *str_concat(char *s1, char *s2)
{
	int n, m;
	int i = 0;
	int j = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	new = malloc(sizeof(char) * (1 + i + j));

	if (new == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
		new[n] = s1[n];
	for (m = 0; m < j; m++)
		new[n + m] = s2[m];

	new[n + m] = '\0';
	return (new);
}


