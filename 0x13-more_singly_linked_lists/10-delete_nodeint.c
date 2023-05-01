#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index- delete node at a given position
 * @head: address of pointer to head node
 * @index: position of node to delete
 *
 * Return: data of node deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr_idx_prev;
	listint_t *ptr_idx_curr;
	listint_t *ptr_idx_later;

	if (head == NULL || *head == NULL || index >= listint_len(*head))
		return (-1);
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	else if (index == (listint_len(*head) - 1))
	{
		delete_last_node(head);
		return (1);
	}
	ptr_idx_prev = get_nodeint_at_index(*head, index - 1);
	ptr_idx_curr = get_nodeint_at_index(*head, index);
	ptr_idx_later = get_nodeint_at_index(*head, index + 1);

	ptr_idx_prev->next = ptr_idx_later;
	free(ptr_idx_curr);
	return (1);
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


/**
 * delete_last_node- add new node at end of linked listint_t list.
 * @head: address of pointer to head node
 *
 * Return: data of deleted node
 */
int delete_last_node(listint_t **head)
{
	listint_t *ptr_temp;
	int n;
	int i;

	ptr_temp = *head;
	if (head == NULL)
		return (0);
	if (*head == NULL)
	{
		return (0);
	}
	n = listint_len(*head);
	i = 0;
	while (i < n - 2)
		ptr_temp = ptr_temp->next;
	free(ptr_temp->next);
	ptr_temp->next = NULL;
	return (0);
}


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

	ptr_temp = *head;
	n = ptr_temp->n;
	*head = (*head)->next;
	free(ptr_temp);
	return (n);
}
