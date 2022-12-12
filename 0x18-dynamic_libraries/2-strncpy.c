#include "main.h"

/**
 * _strncpy - a copy of strncpy.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * @n: limit stop.
 * Return: updated pointer to the destination string [dest].
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
