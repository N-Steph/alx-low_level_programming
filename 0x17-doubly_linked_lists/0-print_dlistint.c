#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: address of head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node;
	dlistint_t node;

	if (h == NULL)
		return (0);
	num_node = 0;
	node = h;
	while (node != NULL)
	{
		printf("%d", node->n);
		node = node->next;
		++num_node
	}
	return (num_node);
}
