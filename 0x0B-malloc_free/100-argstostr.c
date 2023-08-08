#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - ..
 * @ac: ..
 * @av: ..
 * Return: ..
 */

char *argstostr(int ac, char **av)
{
	int i;
	int pos;
	int len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(str + pos, av[i]);
		pos += strlen(av[i]);
		str[pos] = '\n';
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
