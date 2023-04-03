#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * listint_len - return the number of elements
 * @h: pointer to the head of listint_t list
 * Return: number of elements in the function
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
	node++;
	h = h->next;
	}
	return (node);
}
