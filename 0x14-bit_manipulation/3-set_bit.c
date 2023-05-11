#include "main.h"
#include <stddef.h>

/**
 * set_bit - set value of a bit to 1
 * @n: number
 * @index: position of bet to set
 *
 * Return: 1 (Success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask <<= index;
	*n = *n | mask;
	return (1);
}
