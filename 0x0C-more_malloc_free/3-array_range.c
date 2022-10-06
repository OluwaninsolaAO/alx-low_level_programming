#include "main.h"

/**
 * array_range - Allocate and initialize memory for array
 * of set number range.
 * @min: range minimum
 * @max: range maximum
 * Return: pointer to the allocated space.
 */

int *array_range(int min, int max)
{
	int *ptr, i, temp_min = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = temp_min;
		temp_min++;
	}

	return (ptr);
}
