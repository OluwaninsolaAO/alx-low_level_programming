#include "main.h"

/**
 * _memset - A simple function to set a n bite of a given array
 * @s: referenced array
 * @b: char
 * @n: limit
 * Return: referenced array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
