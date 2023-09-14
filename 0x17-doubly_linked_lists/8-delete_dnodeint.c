#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * in a dlistint_t linked list
 * @head: pointer to a pointer of the head of the list.
 * @index: index of the node to delete.
 *
 * Return: 1 if succeeded, otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *hd_1;
	dlistint_t *hd_2;

	hd_1 = *head;

	if (hd_1 != NULL)
		while (hd_1->prev != NULL)
			hd_1 = hd_1->prev;

	while (hd_1 != NULL)
	{
		if (idx == index)
		{
			if (idx == 0)
			{
				*head = hd_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd_2->next = hd_1->next;
				if (hd_1->next != NULL)
					hd_1->next->prev = hd_2;
			}
			free(hd_2);
			return (1);
		}
		hd_2 = hd_1;
		hd_1 = hd_1->next;
		idx++;
	}
	return (-1);
}
