#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - its print a free a 2-dimensional grid
 * @grid: grid
 * @height: height
 * Return: nothing
 */



void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	printf("\t");
	free(grid);
}
