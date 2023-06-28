#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: input
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (int c; i >= 0; c++)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
