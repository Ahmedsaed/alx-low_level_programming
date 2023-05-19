#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the head of the list
 * @idx: idx to insert the node in
 * @n: the value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp, *next;
	unsigned int i = 0;

	if (new_node == NULL || h == NULL)
		return (NULL);

	if (idx != 0)
	{
		tmp = *h;
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = tmp;
		next = tmp->next;
		tmp->next = new_node;
	}

	new_node->next = next;
	if (next != NULL)
		next->prev = new_node;
	return (new_node);
}
