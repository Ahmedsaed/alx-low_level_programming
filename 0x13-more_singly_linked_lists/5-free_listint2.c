#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to the first node of a linked list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&(*head)->next);

	free(*head);
	*head = NULL;
}
