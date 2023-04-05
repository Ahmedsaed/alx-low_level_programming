#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @haed: pointer to the first node
 *
 * Return: int, value of popped node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *old;

	n = (*head)->n;
	old = *head;
	(*head) = (*head)->next;

	free(old);

	return (n);
}
