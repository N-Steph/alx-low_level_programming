#include "main.h"
#include <stddef.h>

/**
 * clear_bit - set value of a bit to 0
 * @n: number
 * @index: position of bet to set
 *
 * Return: 1 (Success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	int index_value;

	mask = 1;
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);
	index_value = get_bit(*n, index);
	if (index_value == 0)
		return (1);
	mask <<= index;
	*n = *n ^ mask;
	return (1);
}

/**
 * get_bit - value of bit at a certain index
 * @n: number
 * @index: position of the bit to determine
 *
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int index_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i = 0;
	while (i < index)
	{
		n >>= 1;
		i++;
	}
	index_value = n & 1;
	return (index_value);
}
