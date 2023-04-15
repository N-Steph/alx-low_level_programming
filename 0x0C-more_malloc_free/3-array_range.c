#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of integers
 * @min: mininum value to store in array
 * @max: maximum value to store in array
 *
 * Return: pointer to array (Success),
 * NULL on failure
 */
int *array_range(int min, int max)
{
	int *ptr_int;
	int *ptr_temp;
	int nmemb;
	int i;

	nmemb = (max - min) + 1;
	if (max < min)
		return (0);
	ptr_int = _calloc(nmemb, sizeof(int));
	if (ptr_int == 0)
		return (0);
	ptr_temp = ptr_int;
	for (i = 0; i < nmemb; i++)
	{
		*ptr_temp = min;
		min++;
		ptr_temp += 1;
	}
	return (ptr_int);
}

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
	if (size * nmemb > UINT_MAX)
		return (0);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (0);
	ptr_temp = ptr;
	for (i = 0; i < nmemb; i++)
	{
		*ptr_temp = 0;
		ptr_temp += size;
	}
	return (ptr);
}
