#include <stdio.h>
#include <stddef.h>

/**
 * print_array - print the elements of an array
 * @array: array to print
 * @size: size of the array
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int index;

	if (array == NULL)
		return;
	index = 0;
	while (index < size)
	{
		printf("%d", array[index]);
		if (index++ < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - implementation of binary search algorithm
 * @array: array in which to search
 * @size: size of the array
 * @value: value to search in array
 *
 * Return: index of value found or -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	left = 0;
	right = size - 1;
	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		print_array(array + left, (right - left) + 1);
		middle = (left + right) / 2;
		if (array[middle] > value)
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
