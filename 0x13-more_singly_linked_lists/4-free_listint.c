#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the first node of a linked list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);

	free(head);
}
