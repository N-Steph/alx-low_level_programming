#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to a positive base 10 number
 * @b: pointer to character string
 *
 * Return: base 10 number (Success), 0 (failure)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index_value = 1;
	unsigned int base_10_num = 0;
	unsigned int counter = 0;
	unsigned i;
	unsigned j;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		b++;
		counter++;
	}
	if (counter > 64)
		return (0);
	b--;
	for (i = 0; i < counter; i++)
	{
		if (*b == '1')
		{
			for (j = 0; j < i; j++)
				index_value *= 2;
		}
		else if (*b != '0')
		{
			return (0);
		}
		else
		{
			b--;
			continue;
		}
		base_10_num += index_value;
		index_value = 1;
		b--;
	}
	return (base_10_num);
}
