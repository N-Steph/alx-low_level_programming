#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add new node at end of linked listint_t list.
 * @head: address of pointer to head node
 * @n: integer element
 *
 * Return: pointer to new last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_new_tn;
	listint_t *ptr_temp;

	ptr_temp = *head;
	ptr_new_tn = malloc(sizeof(listint_t));
	if (head == NULL || ptr_new_tn == NULL)
		return (NULL);
	ptr_new_tn->next = NULL;
	ptr_new_tn->n = n;
	if (*head == NULL)
	{
		*head = ptr_new_tn;
	}
	else
	{
		ptr_temp = mv_last_node(*head);
		ptr_temp->next = ptr_new_tn;
	}
	return (ptr_new_tn);
}

/**
 * mv_last_node - get address of last node of listint_t list
 * @s: pointer to head node
 *
 * Return: address of last node
 */
listint_t *mv_last_node(listint_t *s)
{
	while (s->next != NULL)
		s = s->next;
	return (s);
}
