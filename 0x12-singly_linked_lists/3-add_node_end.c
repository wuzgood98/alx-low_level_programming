#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list.
 * @head: pointer to the head of the node.
 * @str: pointer to the string to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t len = 0;

	if (str == NULL)
		return (NULL);

	/* Create a new node */
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate the length of the string */
	for (; str[len]; len++)
		;

	/* Set the next pointer of the new node to NULL */
	new_node->next = NULL;
	/* Set the length of the new_node to the new length */
	new_node->len = len;
	/* Check if the linked list is empty */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* Traverse to the last node */
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
