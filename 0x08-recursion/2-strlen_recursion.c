#include "main.h"

/**
 * _strlen_recursion - Count passed string lenght.
 * @s: passed string.
 * Return: integer value of the string lenght.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);

	if (*s != '\0')
		n++;

	return (n + _strlen_recursion(s + 1));
}

