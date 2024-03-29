#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to the head of the linked list
 *
 * Return: size_t, number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
