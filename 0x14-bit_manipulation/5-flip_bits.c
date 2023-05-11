#include "main.h"

/**
 * flip_bits - number of bits to flip
 * @n: first number
 * @m: second number
 * Description: This function determines the
 * number of bits to flip in n in order to obtain m
 *
 * Return: number of flip necessary
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_flips;
	int n_last_bit;
	int m_last_bit;

	num_flips = 0;
	while (n != 0 || m != 0)
	{
		n_last_bit = get_bit(n, 0);
		m_last_bit = get_bit(m, 0);
		if (n_last_bit != m_last_bit)
			num_flips++;
		n >>= 1;
		m >>= 1;
	}
	return (num_flips);
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
