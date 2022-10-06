#include "main.h"

/**
 * malloc_checked - Create and allocate a passed number
 * of bytes of memory.
 * @b: unsigned int
 * Return: reference to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	if (b == 0)
		return (NULL);

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
