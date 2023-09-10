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
	char *_key, *_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	node = malloc(sizeof(hash_node_t));
	_key = malloc(sizeof(char) * (strlen(key) + 1));
	_value = malloc(sizeof(char) * (strlen(value) + 1));
	_key = strcpy(_key, key);
	_value = strcpy(_value, value);
	if (_key == NULL || _value == NULL || node == NULL)
		return (0);
	if (curr == NULL)
	{
		node->next = NULL;
	}
	else
	{
		head = curr;
		while (curr != NULL)
		{
			if (strcmp(curr->key, key) == 0)
			{
				free(curr->value);
				curr->value = _value;
				free(_key);
				free(node);
				return (1);
			}
			curr = curr->next;
		}
		node->next = head;
	}
	node->key = _key;
	node->value = _value;
	ht->array[index] = node;
	return (1);
}
