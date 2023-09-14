#include "lists.h"

/**
 * sum_dlistint - finds the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: the sum of all of the data in the list, otherwise 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
