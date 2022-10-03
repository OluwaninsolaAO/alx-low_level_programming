#include "main.h"

/**
 * _strdup - Duplicate passed string.
 * @str: Passed string.
 * Return: pointer to the new string.
 */

char *_strdup(char *str)
{
	char *ptr;
	int str_size = 0;
	int i;

	while (str[str_size])
		str_size++;

	if (str_size == 0 || str == NULL)
		return (NULL);

	ptr = malloc((str_size * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= str_size; i++)
		ptr[i] = str[i];

	return (ptr);
}
