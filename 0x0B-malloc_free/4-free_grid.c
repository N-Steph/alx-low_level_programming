#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: pointer to 2D array
 * @height: size of 2D array
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;
	int **ptr_temp;

	if (grid == 0)
		return;
	ptr_temp = grid;
	for (i = 0; i < height; i++)
	{
		free(*ptr_temp);
		ptr_temp++;
	}
	free(grid);
}
