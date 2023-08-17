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

	if (h == NULL)
		return (0);
	num_node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++num_node;
	}
	return (num_node);
}
