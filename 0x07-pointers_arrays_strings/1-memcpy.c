#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: input
 * @src: input
 * @n: input
 * Return: someting
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	Return(dest);
}
