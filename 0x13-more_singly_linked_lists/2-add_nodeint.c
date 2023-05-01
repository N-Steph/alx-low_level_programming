#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: address of pointer to head node
 *
 * Return: pointer to new head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr_new_hd;

	if (head == NULL)
		return (NULL);
	ptr_new_hd = malloc(sizeof(listint_t));
	if (*head == NULL)
		ptr_new_hd->next = NULL;
	else
		ptr_new_hd->next = *head;
	ptr_new_hd->n = n;
	*head = ptr_new_hd;
	return (*head);
}
