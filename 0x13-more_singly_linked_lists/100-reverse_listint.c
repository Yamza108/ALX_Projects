#include "lists.h"
#include <stdlib.h>


/**
 * reverse_listint - Resverses a listint_t list
 * @head: pointer to the address of the head
 * Return: A pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	if (head == NULL || *head == NULL)
	return (NULL);
	last = NULL;

	while ((*head)->next != NULL)
	{
	first = (*head)->next;
	(*head)->next = last;
	last = *head;
	*head = first;
	}
	(*head)->next = last;
	return (*head);
}
