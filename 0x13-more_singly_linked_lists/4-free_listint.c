#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr_temp;

	if (head == NULL)
		return;
	do {
		ptr_temp = head;
		head = head->next;
		free(ptr_temp);
	} while (head != NULL);
}
