#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: address of pointer to head node
 * @idx: position to insert new node
 * @n: data to put in new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr_idx;
	listint_t *ptr_idx_1;
	listint_t *ptr_temp;

	if (head == NULL || idx > listint_len(*head))
		return (NULL);
	if (idx == listint_len(*head))
		return (add_nodeint_end_beta(head, n));
	else if (idx == 0 || *head = NULL)
		return (add_nodeint(head, n));
	ptr_temp = malloc(sizeof(listint_t));
	if (ptr_temp == NULL)
		return (NULL);
	ptr_temp->n = n;
	ptr_idx = get_nodeint_at_index(*head, idx);
	ptr_idx_1 = get_nodeint_at_index(*head, idx - 1);
	if (ptr_idx == NULL || ptr_idx_1 == NULL)
	{
		free(ptr_temp);
		return (NULL);
	}
	ptr_temp->next = ptr_idx;
	ptr_idx_1->next = ptr_temp;
	return (ptr_temp);
}


/**
 * listint_len - count the number of nodes in linked listint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t len_list;

	len_list = 0;
	if (h == NULL)
		return (len_list);
	do {
		len_list++;
		h = h->next;
	} while (h != NULL);
	return (len_list);
}


/**
 * add_nodeint_end_beta - add new node at end of linked listint_t list.
 * @head: address of pointer to head node
 * @n: integer element
 *
 * Return: pointer to new last node
 */
listint_t *add_nodeint_end_beta(listint_t **head, const int n)
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
		while (ptr_temp->next != NULL)
			ptr_temp = ptr_temp->next;
		ptr_temp->next = ptr_new_tn;
	}
	return (ptr_new_tn);
}


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: address of pointer to head node
 * @n: integer element
 *
 * Return: pointer to new head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr_new_hd;

	ptr_new_hd = malloc(sizeof(listint_t));
	if (head == NULL || ptr_new_hd == NULL)
		return (NULL);
	if (*head == NULL)
		ptr_new_hd->next = NULL;
	else
		ptr_new_hd->next = *head;
	ptr_new_hd->n = n;
	*head = ptr_new_hd;
	return (*head);
}


/**
 * get_nodeint_at_index - get address of nth node.
 * @head: pointer to head node
 * @index: nth node to find
 *
 * Return: address of nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			break;
	}
	return (head);
}
