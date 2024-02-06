#include <stdio.h>
#include <stddef.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer to the first element of array.
 * @n: number of array element to be printed.
 *
 * This function prints n integer of an array starting
 * from the first element.
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		printf("%d", *a);
		a += 1;
		counter++;
		if (counter < n)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search a value in an array of integers.
 *
 * Description: binary_search function looks for a value in
 * an array of integers using the binary search algorithm
 *
 * @array: pointer to the first element of the array.
 * @size: number of array element to be printed.
 * @value: value we are searching for in the array.
 *
 * Return: index of value in array (SUCCESS), -1 (FAILURE)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		print_array(array + L, (R - L + 1));
		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
