#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **curr;
	hash_node_t *head;
	unsigned long int i, counter;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	curr = ht->array;
	i = 0;
	counter = 0;
	printf("{");
	while (i < ht->size)
	{
		if (curr[i] != NULL)
		{
			head = curr[i];
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
		if (curr[i] != NULL && counter != 0)
			printf(", ");
	}
	printf("}\n");
}
