#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - pops out the head node from function
 * @head: Pointer to the head address
 * Return: 0 if list empty, otherwise head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
	return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (ret);
}
