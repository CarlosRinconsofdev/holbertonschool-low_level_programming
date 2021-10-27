#include "main.h"
#include <stdlib.h>
/**
 * free_grid - check the code
 * @grid: int1
 * @height: int2
 * Return: no
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
