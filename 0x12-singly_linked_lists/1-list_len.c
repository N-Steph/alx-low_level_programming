#include <stdlib.h>
#include "lists.h"

/**
 * list_len - count the number of elements in a linked list.
 * @h: pointer to head node
 *
 * Return: number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != 0)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
