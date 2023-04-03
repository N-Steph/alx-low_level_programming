#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill memory
 * @n: number of memory location to fill with b
 *
 * Return: S (pointer to memory area)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;
	char *ptrs;

	counter = 0;
	ptrs = s;
	while (counter < n)
	{
		*ptrs = b;
		ptrs += 1;
		counter++;
	}

	return (s);
}
