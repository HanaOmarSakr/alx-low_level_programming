#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: head node
 *
 * Return: no_nodes (no. of nodes)
 */
size_t print_listint(const listint_t *h)
{
/* stores no. of nodes */
size_t number = 0;
/* traverse through all the elements of list */
while (h != NULL)
{
/* print element n */
printf("%d\n", h->n);
/* move to the next pointer */
h = h->next;
number++;
}
return (n);
}
