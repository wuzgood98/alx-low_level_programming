#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node of a dlistint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node to find.
 *
 * Return: the found node, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (idx == index)
			break;
		head = head->next;
		idx++;
	}

	return (head);
}
