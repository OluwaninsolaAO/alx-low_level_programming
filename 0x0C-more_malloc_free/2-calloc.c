#include "main.h"

/**
 * _calloc - Allocate and intialize with 0x00
 * array of size nmemb of size bytes
 * @nmemb: size of the array.
 * @size: byte size of each elements
 * Return: Pointer to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}

