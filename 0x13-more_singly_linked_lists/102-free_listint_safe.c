#include "lists.h"

void free_ptr_list2(listptr_t **head);

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listptr_t *ptr = NULL, *new_node, *temp;
	listint_t *current;
	size_t count = 0;

	while (*h != NULL)
	{
		new_node = malloc(sizeof(listptr_t));
		if (new_node == NULL)
			exit(98);

		new_node->ptr = (void *)*h;
		new_node->next = ptr;
		ptr = new_node;

		temp = ptr;

		while (temp->next != NULL)
		{
			temp = temp->next;
			if (*h == temp->ptr)
			{
				*h = NULL;
				free_ptr_list2(&ptr);
				return (count);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;
	free_ptr_list2(&ptr);
	return (count);
}

/**
 * free_ptr_list - frees a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: nothing;
 */
void free_ptr_list2(listptr_t **head)
{
	listptr_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
