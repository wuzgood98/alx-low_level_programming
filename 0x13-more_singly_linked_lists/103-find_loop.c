#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && slow->next && head)
	{
		head = head->next;
		slow = slow->next->next;

		if (head == slow)
		{
			head = fast;
			fast = slow;
			while (1)
			{
				slow = fast;
				while (slow->next != head && slow->next != fast)
				{
					slow = slow->next;
				}
				if (slow->next == head)
					break;
				head = head->next;
			}
			return (slow->next);
		}
	}
	return (NULL);
}
