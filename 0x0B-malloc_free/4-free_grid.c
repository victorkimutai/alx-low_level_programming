#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  it frees 2d array
 * @grid: the 2d grid
 * @height: the height dimension of grid
 * Return: nothing (void)
 *
 */

void free_grid(int **grid, int height)
{
int num;
for (num = 0; num < height; num++)
{
free(grid[num]);
}
free(grid);
}
