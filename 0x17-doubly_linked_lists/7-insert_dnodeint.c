#include "lists.h"

/**
 * insert_dnodeint_at_index - add new node at a particular index
 * @h: pointer containing address of head node
 * @idx: position to insert
 * @n: integer to store in new node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node;
	unsigned int counter;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	counter = 0;
	node = *h;
	while (node != NULL)
	{
		if (counter == idx)
			break;
		++counter;
		node = node->next;
	}
	if (node == NULL && (counter + 1) == idx)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	else if (node == NULL && counter != idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = node;
	new_node->prev = node->prev;
	new_node->n = n;
	return (new_node);
}
