#include "lists.h"
#include <stdlib.h>


/**
 * looped_listint_count - counts the number of unique nodes
 * @head: Pointer to the head of the function
 * Return: if fails 0, otherwise the number of unique nodes
 */

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

size_t looped_listint_count(listint_t *head)
{
	listint_t *fr, *swp;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	fr = head->next;
	swp = (head->next)->next;

	while (swp)
	{
	if (fr == swp)
	{
	fr = head;
	while (fr != swp)
	{
	nodes++;
	fr = fr->next;
	}
	return (nodes);
	}
	fr = fr->next;
	swp = (swp->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a lsitint_t list safely
 * @h: Pointer to the head of the function
 * Return: The size of the list that was freed
 * description: function sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);
	if (nodes == 0)
	{
	for (; h != NULL && *h != NULL; nodes++)
	{
	tmp = (*h)->next;
	free(*h);
	*h = tmp;
	}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	tmp = (*h)->next;
	free(*h);
	*h = tmp;
	}
	*h = NULL;
	}
	h = NULL;
	return (nodes);
}
