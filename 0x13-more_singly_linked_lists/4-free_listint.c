#include "lists.h"
#include <stdlib.h>

#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the head of the listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
