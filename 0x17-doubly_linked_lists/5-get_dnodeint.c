#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: the index of the element to return
 *
 * Return: pointer to nth node if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp != NULL)
	{
		if (n == index)
			return (tmp);
		else if (n > index)
			return (NULL);
		tmp = tmp->next;
		n++;
	}

	return (NULL);
}
