#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: being the array to be searched.
 * @size: being the size of the array.
 * @value: being the target value.
 * Return: index of the value in the array or -1 if array is NULL
 * or value cannot be found in the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block_size = (int) sqrt(size);
	size_t start_b = 0, end_b = 0, i, j;

	if (array == NULL)
		return (-1);

	for (i = 1; i < (block_size + 1); i++)
	{
		start_b = end_b;
		if (end_b >= size)
			return (-1);

		if ((block_size * i) > size)
			end_b = size - 1;
		else
			end_b = block_size * i;

		printf("Value checked array[%d] = [%d]\n", (int) start_b,
				array[start_b]);

		if (array[end_b] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					(int) start_b, (int) end_b);
			for (j = start_b; j <= end_b; j++)
			{
				printf("Value checked array[%d] = [%d]\n",
						(int) j, array[j]);
				if (array[j] == value)
				{
					printf("Found %d at index: %d\n",
							value, (int) j);
					return (j);
				}
			}
			return (-1);
		}
	}

	return (-1);
}
