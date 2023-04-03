#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all elements of function listint_t *head
 * @h: Pointer to the list_t
 * Return: Number of nodes contained in the function list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
	node++;
	printf("%d\n", h->n);
	h = h->next;
	}
	return (node);
}
