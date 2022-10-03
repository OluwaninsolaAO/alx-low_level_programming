#include "main.h"

/**
 * size_of - count the character of a string.
 * @c: passed char.
 * Return: count.
 */
int size_of(char *c)
{
	int i = 0;

	if (c == NULL)
		return (0);

	if (c[0] == '\0')
		return (0);

	while (c[i] != '\0')
		i++;

	printf("%s = %d\n", c, i);
	return (i + 1);
}

/**
 * str_concat - Concatenate two passed strings
 * @s1: String 1
 * @s2: String 2
 * Return: pointer to the joint string.
 */

char *str_concat(char *s1, char *s2)
{
	int size_s1 = size_of(s1);
	int size_s2 = size_of(s2);
	char *ptr;
	int i, j;

	ptr = malloc((size_s1 + size_s2) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size_s1 - 1); i++)
		ptr[i] = s1[i];

	for (j = 0; j < size_s2; j++)
		ptr[i + j + 1] = s2[j];

	ptr[i + j + 2] = '\0';

	return (ptr);
}
