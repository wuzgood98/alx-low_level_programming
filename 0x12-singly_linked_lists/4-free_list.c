#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the head of the list.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		/* Store the reference to the nex node */
		current = head->next;

		/* free the memory from the string */
		free(head->str);

		/* free the memory for the string */
		free(head);

		/* Move to the next node */
		head = current;
	}
}
