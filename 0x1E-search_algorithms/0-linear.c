#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - uses linear search algorithm to search an element in array
 * Description: This function uses the linear search algorithm to look for the
 * first occurrence an element in an array and out the index of that element
 * in the array
 *
 * @array: array to search the element into
 * @size: size of the array
 * @value: value to look for in the array
 *
 * Return: -1 (FAILURE), index of searched element (SUCCESS)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* check if the array is empty */
	if (array == NULL)
		return (-1);

	/* Searching the element by interating through the array */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
