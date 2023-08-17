#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of dlistint list
 * @head: contain address of head node
 * @n: integer to store in node
 *
 * Return: address of new node, or NULL if failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new_node;

	if (head == NULL)
		return (NULL);
	new_node = NULL;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->prev = NULL;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
		new_node->prev = node;
	}
	new_node->next = NULL;
	new_node->n = n;
	return (new_node);
}
