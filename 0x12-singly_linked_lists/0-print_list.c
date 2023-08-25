#include "lists.h"
#include <stdio.h>
/*
 * _strlen - ...
 * @s: ...
 * Return: ...
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
	int i;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->len);
		i++;
		h = h->next;
	}
	return (i);
}

