#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index 'index' of
 * a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *next;
	unsigned int i = 0;

	if (index != 0)
	{
		for (; i < index - 1 && prev != NULL; i++)
			prev = prev->next;
	}

	if (prev == NULL || (index != 0 && prev->next == NULL))
		return (-1);

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
