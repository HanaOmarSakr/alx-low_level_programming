#include "lists.h"
#include <stdio.h>
/**
 * _strlen - prints all the elements of a list_t list
 * @s: pointer to the head of the list
 * Return: the number of nodes
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		c++;
	}
	return (c);
}
