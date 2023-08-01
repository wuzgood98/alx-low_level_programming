#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		/* Store the reference to the next node */
		head = head->next;

		/* free the memory from the list */
		free(current);
	}
}
