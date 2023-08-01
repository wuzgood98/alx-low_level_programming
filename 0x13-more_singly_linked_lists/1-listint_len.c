#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the listint_t.
 *
 * Return: number of elements of the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
