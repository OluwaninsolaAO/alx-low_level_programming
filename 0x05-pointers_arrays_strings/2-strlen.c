#include "main.h"

/**
 * _strlen - Check for lenght of any passed string
 * Return: string lenght of type int
 * @s: variable pointer
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
