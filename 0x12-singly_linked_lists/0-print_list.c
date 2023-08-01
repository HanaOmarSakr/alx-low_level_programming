#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int c = 0;
	list_t *ptr = h;

	while (ptr->next != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		c++;
		ptr = ptr->next;
	}
	return (c);
}
