#include "lists.h"

/**
 * listint_len - count the number of nodes in linked listint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t len_list;

	len_list = 0;
	if (h == NULL)
		return (len_list);
	do {
		len_list++;
		h = h->next;
	} while (h != NULL);
	return (len_list);
}
