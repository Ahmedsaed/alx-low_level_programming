#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to first node
 * @index: index of required node
 *
 * Return: listint_t, at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}

	return (node);
}
