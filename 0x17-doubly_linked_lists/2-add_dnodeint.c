#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @n: the new value
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_item = malloc(sizeof(dlistint_t));

	if (new_item == NULL || head == NULL)
		return (NULL);

	new_item->n = n;
	new_item->next = *head;
	new_item->prev = NULL;

	*head = new_item;
	if (new_item->next != NULL)
		(new_item->next)->prev = new_item;

	return (new_item);
}
