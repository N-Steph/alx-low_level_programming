#include "lists.h"

/**
 * add_dnodeint - add new node at beginning of a dlistint_t list
 * @head: address of head node
 * @n: integer to store in new node
 *
 * Return: address of new node, NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = NULL;
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		new_node->n = n;
		(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
	}
	*head = new_node;
	return (*head);
}
