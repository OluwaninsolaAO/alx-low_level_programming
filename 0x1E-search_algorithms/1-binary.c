#include "search_algos.h"

/**
 * print_array - prints a list of array.
 * @array: being the array to be printed.
 * @left: being the left index to start from.
 * @right: being the right index to start from.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (array == NULL)
		return;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: being a sorted array of integers.
 * @size: being the size of the array.
 * @value: being the value to be searched for in the array.
 * Return: the index where value is located or -1 if array
 * is NULL or value cannot be found within the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
