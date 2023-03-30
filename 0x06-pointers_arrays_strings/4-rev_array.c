#include "main.h"

/**
 * reverse_array - reverses content of an array of
 * integer.
 * @a: pointer to first element of array
 * @n: number of element of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *ptr1;
	int *ptr2;
	int temp;
	int i;

	ptr1 = a;
	ptr2 = a;
	for (i = 1; i < n; i++)
		ptr2 += 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1 += 1;
		ptr2 -= 1;
	}
}
