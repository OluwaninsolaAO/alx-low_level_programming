#include "function_pointers.h"

/**
 * int_index - returns the index of element from the passed
 * array that matches the defined integer from the passed
 * function
 * @array: passed array
 * @size: size of the passed array
 * @cmp: passed function
 * Return: the index (int) of the matched result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
