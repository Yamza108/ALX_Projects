#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - calculates the sum of the function data
 * @head: Pointer to the head of the listint_t
 * Return: if empty 0, otherwise the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum = sum + head->n;
	head = head->next;
	}

	return (sum);
}
