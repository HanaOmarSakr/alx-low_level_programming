#include "main.h"
/**
 * puts_half - prints second half of the string
 *
 * @str: input
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}
	while (j <= i)
	{
		_putchar(str[i]);
		j++;
	}
	_putchar('\n');
}