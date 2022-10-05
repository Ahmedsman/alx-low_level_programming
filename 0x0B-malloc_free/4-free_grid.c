#include  "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees a 2 dimensional grid 
 * previously created by your alloc_grid function
 * @grid: dimentional array
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grif);
}
