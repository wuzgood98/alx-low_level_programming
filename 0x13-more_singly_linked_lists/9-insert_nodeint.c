#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: index where the new node should be added.
 * @n: new node to add to the list.
 *
 * Return: NULL if it is not possible to add the new node at the given
 * index, otherwise the the address of the nodes in the linked list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int index = 0;

	temp = *head;

	if (idx != 0)
	{
		for (; index < idx - 1 && temp != NULL; index++)
			temp = temp->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
