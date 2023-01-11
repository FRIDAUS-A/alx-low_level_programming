#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional array
 * @grid: address of the two dimensional grid
 * @height: height of the grid
 * Return: Allow success
*/
void free_grid(int **grid, int height)
{
	height = height - 1;
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
