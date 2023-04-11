#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: size of the 1D array
 * @height: size of each of arrau in the 1D array
 *
 * Return: pointer (Success), NULL (failure)
 */
int **alloc_grid(int width, int height)
{
	int **ptr_1D;
	int **ptr_temp;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (0);
	ptr_1D = malloc(sizeof(ptr_1D) * height);
	if (ptr_1D == 0)
		return (0);
	ptr_temp = ptr_1D;
	for (i = 0; i < height; i++)
	{
		*ptr_temp = malloc(sizeof(int) * width);
		if (*ptr_temp == 0)
			return (0);
		for (j = 0; j < width; j++)
		{
			*(*ptr_temp + j) = 0;
		}
		ptr_temp++;
	}
	return (ptr_1D);
}
