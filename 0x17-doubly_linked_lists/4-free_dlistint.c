#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
		return;
	node = head;
	while (head != NULL)
	{
		head = head->next;
		free(node);
		node = head;
	}
}
