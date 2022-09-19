#include "main.h"

/**
 * print_rev - Simply print a String in Esrever
 * Return: Nothing
 * @s: The victim
 */

void print_rev(char *s)
{
	int n, i;

	n = 0;

	while (s[n] != '\0')
		n++;

	for (i = n; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}


