#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free all allocated memory
 * @grid: row
 * @height: column
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i= 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
