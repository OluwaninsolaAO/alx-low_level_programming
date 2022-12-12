#include "main.h"
#include <stddef.h>

/**
 * _strchr - Search for a char in a referenced string
 * @s: String
 * @c: Char
 * Return: Address of the first match.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}

	if (c == *s)
		return (s);

	return (NULL);
}
