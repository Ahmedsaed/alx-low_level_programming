#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *back, *front;

	back = front = head;
	while (back && front && front->next)
	{
		back = back->next;
		front = front->next->next;

		if (back == front)
		{
			back = head;
			break;
		}
	}

	if (!back || !front || !front->next)
		return (NULL);

	while (back != front)
	{
		back = back->next;
		front = front->next;
	}

	return (hare);
}
