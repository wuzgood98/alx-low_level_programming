#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of dlistint_t list.
 * @head: pointer to a pointer of the head of the list.
 * @n: node to add at the end of the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *hd;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = hd;

	return (new);
}
