#include "lists.h"

/**
 * dlistint_len - finds the numbers of elements in a linked dlistint_t list.
 * @h: pointer to the head of the dlistint_t list
 *
 * Return: the length of the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
