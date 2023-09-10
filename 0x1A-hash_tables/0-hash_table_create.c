#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t*) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	i = 0;
	array = table->array;
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	return (table);
}
