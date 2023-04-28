#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: address of poiner to head node
 * @str: data string to include in new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == 0)
		return (0);
	new_node = malloc(sizeof(list_t));
	if (new_node == 0)
		return (0);
	if (str == 0)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * _strlen - determine the length of a string
 * @s: pointer to the array of character containing
 * the string
 *
 * This function counts the number of bytes in a string
 * except the '\0' character.
 *
 * Return: len (number of bytes)
 */
unsigned int _strlen(const char *s)
{
	int len;
	const char *ptr_temp;

	len = 0;
	ptr_temp = s;
	while (*ptr_temp != '\0')
	{
		len++;
		ptr_temp += 1;
	}
	return (len);
}
