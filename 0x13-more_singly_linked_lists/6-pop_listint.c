#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node
 * @head: address of the pointer to head node
 *
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr_temp;
	int n;

	n = 0;
	if (head == NULL || *head == NULL)
		return (n);
	ptr_temp = *head;
	n = ptr_temp->n;
	*head = (*head)->next;
	free(ptr_temp);
	return (n);
}
