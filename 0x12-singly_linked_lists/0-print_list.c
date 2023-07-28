#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *curt = h;

	while (curt != NULL)
	{
		if (curt->str == NULL)
		{
			 printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", curt->len, curt->str);
		}
		c++;
		curt = curt->next;
	}
	return (c);
}
