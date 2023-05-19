#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @n: the value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_item = malloc(sizeof(dlistint_t));
	dlistint_t *c;

	if (new_item == NULL || head == NULL)
		return (NULL);

	new_item->n = n;
	new_item->next = NULL;

	if (*head == NULL)
	{
		new_item->prev = NULL;
		*head = new_item;
		return (new_item);
	}

	c = *head;
	while (c->next != NULL)
		c = c->next;

	new_item->prev = c;
	c->next = new_item;

	return (new_item);
}
