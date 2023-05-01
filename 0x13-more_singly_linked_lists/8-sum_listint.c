#include "lists.h"

/**
 * sum_listint - sum all the data of a listint_t linked list
 * @head: pointer to head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	do {
		sum += head->n;
		head = head->next;
	} while (head != NULL);
	return (sum);
}
