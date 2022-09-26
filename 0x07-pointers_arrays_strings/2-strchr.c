#include "main.h"
#include <stdio.h>

/**
 * _strchr - Search for a char in a referenced string
 * @s: String
 * @c: Char
 * Return: Address of the first match.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	if (c == s[0])
		return (s);
	
	return (NULL);
}
