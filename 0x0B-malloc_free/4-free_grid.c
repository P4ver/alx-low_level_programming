#include "main.h"
/**
 * free_grid -  function that frees a 2 dimensional grid,
 *@grid: grid var,
 *@height: variable int (height)
 */
void free_grid(int **grid, int height)
{
	int qq;

	if (grid == NULL)
		return;
	for (qq = 0; qq < height; qq++)
		free(grid[qq]);
	free(grid);
}
