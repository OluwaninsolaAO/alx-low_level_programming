#include "main.h"

unsigned int _strlen(char *str);

/**
 * string_nconcat - Concatenated n bytes of s2 to s1
 * @s1: Base string
 * @s2: The other string
 * @n: n bytes to concatenates
 * Return: pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len = _strlen(s1), s2_len = _strlen(s2), i, j;

	if (n >= s2_len)
		n = s2_len;

	ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}

/**
 * _strlen - count string lenght not counting null byte
 * @str: pointer to string
 * Return: string lenght
 */

unsigned int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;
	return (len);
}
