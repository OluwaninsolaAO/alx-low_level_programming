#include "main.h"

/**
 * rev_string - Reverse an array string
 * Return: Null
 * @s: victim
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;

	while (j < i)
	{
		temp = s[j];
		s[j++] = s[i];
		s[i] = temp;
	}
}
