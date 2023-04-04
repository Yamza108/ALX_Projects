#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * looped_listint_len - counts the number of unique nodes
 * @head: Pointer to the head
 * Return:if fails 0, otherwise number of unique nodes
 */

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *fr, *swp;
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
	swp = swp->next;
	}
	fr = fr->next;
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
 * print_listint_safe - prints listint_t safely
 * @head: pointer to the head of the listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n",  (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
