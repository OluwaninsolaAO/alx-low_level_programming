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

	if (str == NULL)
		return (NULL);

	if (str[0] == '\0')
	{
		ptr = malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}

	while (str[str_size])
		str_size++;

	if (str_size > 0)
		ptr = malloc((str_size * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str_size; i++)
		ptr[i] = str[i];

	return (ptr);
}
