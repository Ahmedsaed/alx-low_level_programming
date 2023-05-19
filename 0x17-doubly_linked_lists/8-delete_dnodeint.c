#include "lists.h"

/**
 * delete_dnodeint_at_index - int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
 *
 * @head: pointer to the head of the list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;

	if  (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
