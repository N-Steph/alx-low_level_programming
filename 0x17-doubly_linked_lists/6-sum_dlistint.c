#include "lists.h"

/**
 * sum_dlistint - sum all data in dlistint_t
 * @head: address of head node
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
