#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list.
 * @h: pointer to head node
 *
 * Return: number of node in listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t listint_t_nodes;

	listint_t_nodes = 0;
	if (h == NULL)
		return (listint_t_nodes);
	do {
		printf("%d\n", h->n);
		listint_t_nodes++;
		h = h->next;
	} while (h != NULL);
	return (listint_t_nodes);
}
