#include "hash_tables.h"

/**
 * key_index - evaluate the index of a key
 * @key: string
 * @size: size of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL)
		exit(EXIT_FAILURE);
	index = hash_djb2(key);
	index = index % size;
	return (index);
}
