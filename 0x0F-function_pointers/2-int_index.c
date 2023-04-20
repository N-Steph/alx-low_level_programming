#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function using array element
 *
 * Return: -1 (no match found or size is negative),
 * index of element if cmp return a non zero number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int return_value;

	if (array == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i <  size; i++)
	{
		return_value = (*cmp)(array[i]);
		if (return_value != 0)
			return (i);
	}
	return (-1);
}
