#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - Locates a given node
 * @head: Pointer to the head
 * @index: The index of the node to locate
 * Return: if fails NULL, otherwise located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
	if (head == NULL)
	return (NULL);

	head = head->next;
	}
	return (head);
}
