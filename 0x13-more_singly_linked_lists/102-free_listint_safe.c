#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc_list - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @old_list: the old list to append
 * @new_size: size of the new list (always one more than the old list)
 * @new_node: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **_realloc_list(listint_t **old_list, size_t new_size, listint_t *new_node)
{
	listint_t **new_list;
	size_t i;

	new_list = malloc(new_size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(old_list);
		exit(98);
	}
	for (i = 0; i < new_size - 1; i++)
		new_list[i] = old_list[i];
	new_list[i] = new_node;
	free(old_list);
	return (new_list);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head_ptr: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head_ptr)
{
	size_t i, count = 0;
	listint_t **list_array = NULL;
	listint_t *next_node;

	if (head_ptr == NULL || *head_ptr == NULL)
		return (count);
	while (*head_ptr != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*head_ptr == list_array[i])
			{
				*head_ptr = NULL;
				free(list_array);
				return (count);
			}
		}
		count++;
		list_array = _realloc_list(list_array, count, *head_ptr);
		next_node = (*head_ptr)->next;
		free(*head_ptr);
		*head_ptr = next_node;
	}
	free(list_array);
	return (count);
}
