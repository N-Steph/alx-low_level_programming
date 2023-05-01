#include "lists.h"

/**
 * get_nodeint_at_index - get address of nth node.
 * @head: pointer to head node
 * @index: nth node to find
 *
 * Return: address of nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			break;
	}
	return (head);
}
