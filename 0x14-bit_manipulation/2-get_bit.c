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
	unsigned int num_signif_bit;
	unsigned int i;
	int index_value;

	num_signif_bit = num_significant_bit(n);
	if (index > (num_signif_bit - 1))
		return (-1);
	i = 0;
	while (i < (num_signif_bit - index))
	{
		n >>= 1;
		i++;
	}
	index_value = n & 1;
	return (index_value);
}

/**
 * num_significant_bit - count significant bit of a number
 * @n: number to count its significant bit
 *
 * Return: number of significant bits counter
 */

unsigned int num_significant_bit(unsigned long int n)
{
	unsigned int num_bit;

	num_bit = 0;
	while (n != 0)
	{
		n = n >> 1;
		num_bit++;
	}
	return (num_bit);
}
