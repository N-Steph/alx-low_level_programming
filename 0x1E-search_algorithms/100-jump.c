#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - search an elemnt in an array
 *
 * Description: jump_search function uses the jump search
 * algorithm to search an integer in an array of integers
 *
 * @array: array of integers
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: -1 (the integer is not found in the array),
 * index of the integer in the array if it is present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	int jump = sqrt(size);

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%ld] = [%ld]\n", i, i);
	}
	j = i - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", j, i);
	while (j <= i)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
		if (j >= size)
			break;
	}
	return (-1);
}
