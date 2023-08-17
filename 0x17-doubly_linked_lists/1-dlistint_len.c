#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list
 * @h: address of head node
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node;

	if (h == NULL)
		return (0);
	num_node = 0;
	while (h != NULL)
	{
		h = h->next;
		++num_node;
	}
	return (num_node);
}
