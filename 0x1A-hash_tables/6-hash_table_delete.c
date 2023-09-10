#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array;
	hash_node_t *curr, *prev;
	unsigned long int i;

	if (ht == NULL)
		return;
	array = ht->array;
	i = 0;
	while (i < ht->size)
	{
		if (array[i] != NULL)
		{
			curr = array[i];
			prev = array[i];
			while (curr != NULL)
			{
				curr = curr->next;
				free(prev->key);
				free(prev->value);
				prev->next = NULL;
				free(prev);
				prev = curr;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
