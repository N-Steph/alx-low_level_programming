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
	ptr_int = malloc(sizeof(int) * nmemb);
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
