#include "lists.h"

void free_ptr_list(listptr_t **head);

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listptr_t *ptr = NULL, *new_node, *temp;
	size_t count = 0;

	while (head != NULL)
	{
		new_node = malloc(sizeof(listptr_t));
		if (new_node == NULL)
			exit(98);

		new_node->ptr = (void *)head;
		new_node->next = ptr;
		ptr = new_node;

		temp = ptr;

		while (temp->next != NULL)
		{
			temp = temp->next;
			if (head == temp->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_ptr_list(&ptr);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	free_ptr_list(&ptr);
	return (count);
}

/**
 * free_ptr_list - frees a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: nothing;
 */
void free_ptr_list(listptr_t **head)
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
