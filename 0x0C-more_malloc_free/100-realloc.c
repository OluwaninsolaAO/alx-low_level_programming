#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: passed string.
 * @old_size: old string size.
 * @new_size: new string size.
 * Return: pointer to the new allocated memory.
 */

void *_realloc(void *ptr __attribute__ ((unused)), unsigned int old_size __attribute__ ((unused)), unsigned int new_size __attribute__ ((unused)))
{
	printf("%p\n", ptr);
	printf("%p\n", ptr + 1);
	return (ptr);
}
