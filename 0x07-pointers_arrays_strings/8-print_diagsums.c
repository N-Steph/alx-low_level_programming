#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix.
 * @a: pointer to first row of array
 * @size: size of the array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int diag_sum1;
	int diag_sum2;

	diag_sum1 = 0;
	diag_sum2 = 0;
	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag_sum1 += *(a + (i * size + j));
				break;
			}
		}
	}
	printf("%d, ", diag_sum1);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j == (size - 1))
			{
				diag_sum2 += *(a + (i * size + j));
				break;
			}
		}
	}
	printf("%d\n", diag_sum2);
}
