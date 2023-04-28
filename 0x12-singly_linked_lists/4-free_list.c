#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head node of list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr_temp;

	if (head == 0)
		return;
	while (head->next != 0)
	{
		ptr_temp = head;
		head = head->next;
		free(ptr_temp->str);
		free(ptr_temp);
	}
	free(head->str);
	free(head);
}
