#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory of an array
 * @nmemb: number of array element
 * @size: number of bytes of an element
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int *ptr_temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (0);
	ptr_temp = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		*ptr_temp = 0;
		ptr_temp += 1;
	}
	return (ptr);
}
