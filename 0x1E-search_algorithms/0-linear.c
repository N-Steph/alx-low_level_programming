#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - implementation of linear search algorithm
 * @array: array containing element to search
 * @size: size of the array
 * @value: value to earch in the array
 *
 * Return: index if element is found and -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
