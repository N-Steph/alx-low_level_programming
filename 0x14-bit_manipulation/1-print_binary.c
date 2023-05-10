#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_binary - print binary representation of a number
 * @n: number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned short int bit_print;
	unsigned short int i;
	unsigned short int signif_bit;

	if (n == 0)
		_putchar('0');
	signif_bit = num_significant_bit(n);
	reverse_bit_sequence(&n);

	bit_print = 0;
	i = 0;
	while (i < signif_bit)
	{
		bit_print = n & 1;
		_putchar('0' + bit_print);
		n >>= 1;
		i++;
	}
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

/**
 * reverse_bit_sequence - reverse bit sequence
 * @bit_ptr: pointer to the bit sequence
 *
 * Return: nothing
 */

void reverse_bit_sequence(unsigned long int *bit_ptr)
{
	unsigned int signif_bit;
	unsigned long int i;
	unsigned long int inverse;

	if (bit_ptr == NULL)
		return;
	signif_bit = num_significant_bit(*bit_ptr);
	i = 0;
	inverse = 0;
	while (i < signif_bit)
	{
		inverse <<= 1;
		inverse |= *bit_ptr & 1;
		*bit_ptr >>= 1;
		i++;
	}
	*bit_ptr += inverse;
}
