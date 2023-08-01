#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: 0 if the list is empty, otherwise the sum of all the
 * data (n) in the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	unsigned int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
