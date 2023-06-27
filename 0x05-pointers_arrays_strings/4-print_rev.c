#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: input
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
}
