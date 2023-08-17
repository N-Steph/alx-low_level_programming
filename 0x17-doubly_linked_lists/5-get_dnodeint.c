#include "lists.h"

/**
 * get_dnodeint_at_index - retieve node
 * @head: address of head node
 * @index: index of node to retrieve
 *
 * Return: address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	counter = 0;
	while (head != NULL)
	{
		if (counter == index)
		{
			return (head);
		}
		head = head->next;
		++counter;
	}
	return (NULL);
}
