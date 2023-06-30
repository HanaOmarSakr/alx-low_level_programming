#include "main.h"
/**
*_strcat - concatenates two strings
*@dest: the destination string
*@src: the source string
*Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	for (int i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
		++i;
		++j;
	}
	dest[src_len + dest_len] = '\0';
	return (dest);
}
