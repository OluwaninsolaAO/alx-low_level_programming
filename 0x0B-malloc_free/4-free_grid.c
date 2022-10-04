#include "main.h"

/**
 * free_grid - free allocated space for any array
 * with a defined height.
 * @grid: passed array.
 * @height: height of the array.
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
