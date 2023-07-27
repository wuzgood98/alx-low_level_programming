#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the head of the list.
 * @str: pointer to the string to prepend.
 *
 * Return: the address od the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t len = 0;

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (; str[len]; len++)
		;

	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
