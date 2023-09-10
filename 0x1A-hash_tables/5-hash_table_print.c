#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array;
	hash_node_t *head;
	unsigned long int i, counter;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	array = ht->array;
	i = 0;
	counter = 0;
	printf("{");
	while (i < ht->size)
	{
		if (array[i] != NULL)
		{
			head = array[i];
			while (head != NULL)
			{
				printf("\'%s\': \'%s\'", head->key, head->value);
				counter++;
				head = head->next;
				if (head != NULL)
					printf(", ");
			}
		}
		i++;
		if (i < ht->size)
		{
			if (array[i] != NULL && counter != 0)
				printf(", ");
		}
	}
	printf("}\n");
}
