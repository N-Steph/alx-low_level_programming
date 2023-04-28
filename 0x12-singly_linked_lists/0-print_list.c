#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to the head node
 *
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	if (h == 0)
		return (0);
	while (h != 0)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
