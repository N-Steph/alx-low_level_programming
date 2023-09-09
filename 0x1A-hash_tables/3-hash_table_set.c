#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: string
 * @value: string, value of key
 *
 * Return: 1 (Success), 0 (otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *curr, *head, *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if (curr == NULL)
	{
		node->key = (char *)key;
		node->value = (char *)value;
		node->next = NULL;
	}
	else
	{
		head = curr;
		while (curr != NULL)
		{
			if (strcmp(curr->key, key) == 0)
			{
				curr->value = (char *)value;
				free(node);
				return (1);
			}
			curr = curr->next;
		}
		node->key = (char *)key;
		node->value = (char *)value;
		node->next = head;
		ht->array[index] = node;
	}
	return (1);
}
