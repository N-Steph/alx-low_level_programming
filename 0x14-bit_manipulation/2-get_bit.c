#include "main.h"

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
