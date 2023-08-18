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
	dlistint_t *h;
	size_t d_len, counter;

	if (head == NULL || *head == NULL)
		return (-1);
	d_len = dlistint_len(*head);
	if (d_len == 1 && index == 0)
	{
		free(*head);
		(*head) = NULL;
	}
	if (d_len == 1 && index != 0)
		return (-1);
	if (d_len > 1 && index == 0)
	{
		h = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		h->next = NULL;
		free(h);
	}
	if (d_len > 1 && (index > 0 && index < d_len))
	{
		counter = 0;
		h = *head;
		while (h != NULL)
		{
			if (counter == index)
				break;
			++counter;
			h = h->next;
		}
		(h->prev)->next = h->next;
		(h->next)->prev = h->prev;
		free(h);
		return (1);
	}
	if (d_len > 1 && index >= d_len)
		return (-1);
	return (1);
}

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
