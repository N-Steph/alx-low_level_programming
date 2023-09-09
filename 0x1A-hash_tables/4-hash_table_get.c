#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: pointer to hash table
 * @key: string, key to retrieve value
 *
 * Return: pointer to string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	if (curr == NULL)
		return (NULL);
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}
	return (NULL);
}
