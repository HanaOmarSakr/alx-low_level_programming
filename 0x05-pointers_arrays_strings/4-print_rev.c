#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: input
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int c;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 0; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
