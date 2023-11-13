#include <stdlib.h>
/**
 * free_grid - Something usefull
 * @grid: Something more usefull
 * @height: Something more usefull
 *
 * Return: Something much more usefull
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
