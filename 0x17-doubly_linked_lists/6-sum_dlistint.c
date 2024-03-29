#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: size, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
