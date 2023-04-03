#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes from memory area src to
 * memory area dest.
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;
	char *ptrdest;

	counter = 0;
	ptrdest = dest;
	while (counter < n)
	{
		*ptrdest = *src;
		ptrdest++;
		src++;
		counter++;
	}

	return (dest);
}
