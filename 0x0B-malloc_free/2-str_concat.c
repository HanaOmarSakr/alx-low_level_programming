#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - adds two strings
 * @s1: input
 * @s2: input
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
		len2++;

	int t = len1 + len2;

	str = malloc(sizeof(char) * (t + 1));

	if  (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
		str[len1 + i] = s2[i];
	str[t] = '\0';
	return (str);
}

