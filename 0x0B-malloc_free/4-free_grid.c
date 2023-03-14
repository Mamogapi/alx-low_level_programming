#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/** 
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: integer double pointer
 * @height: integer input variable
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || grid == 0)
		return;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
