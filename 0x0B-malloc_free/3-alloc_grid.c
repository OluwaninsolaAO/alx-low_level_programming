#include "main.h"

/**
 * alloc_grid - Allocate grid
 * @width: grid width
 * @height: grid height
 * Return: reference to grid
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0, k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; k <= i; k++)
				free(array[k]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;

	return (array);
}
