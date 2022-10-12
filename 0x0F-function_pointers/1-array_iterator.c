#include "function_pointers.h"

/**
 * array_iterator - call the passed function on every
 * elements of the passed array.
 * @array: passed array
 * @size: size of the passed array
 * @action: passed function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
