#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer of first node
 * @idx: index to insert new node at
 * @n: value of new node
 *
 * Return: listint_t - pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *new_node = malloc(sizeof(listint_t)), *temp = *head;

	if (new_node == NULL || head == NULL)
		return (NULL);

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = tmp->next;
	temp->next = new_node;
	return (new_node);
}
