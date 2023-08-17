#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a particular index
 * @head: pointer containing address of head node
 * @index: index of node to delete
 *
 * Return: 1 (Success), -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *present, *prev, *next;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		node = *head;
		head = (*head)->next;
		(*head)->prev = NULL;
		free(node);
	}
	counter = 0;
	node = *head;
	while (node != NULL)
	{
		if (counter == index)
			break;
		++counter;
		node = node->next;
	}
	if (node == NULL)
		return (-1);
	present = node;
	prev = node->prev;
	next = node->next;
	prev->next = next;
	next->prev = prev;
	free(present);
	return (1);
}
