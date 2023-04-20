#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * given as parametr on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || size == 0 || action == 0)
		exit(1);
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
