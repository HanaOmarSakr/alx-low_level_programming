#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

/* Loop through the list and free each node and its data */
	while (head != NULL)
	{
		temp = head; /* Save the current node */
		head = head->next; /* Move to the next node */
		free(temp->str); /* Free the string data */
		free(temp); /* Free the node */

	}
}

