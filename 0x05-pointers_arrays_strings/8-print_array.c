#include <stdio.h>
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
