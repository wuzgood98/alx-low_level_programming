#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: pointer to the head of the list.
 *
 * Return: 0 if the linked list is empty,
 * otherwise the head of the node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head, *current;
	int node_head;

	if (*head == NULL)
		return (0);

	current = *head;

	node_head = current->n;
	new_head = current->next;

	free(current);

	*head = new_head;
	return (node_head);
}
