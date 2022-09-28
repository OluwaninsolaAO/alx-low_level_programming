#include "main.h"

/**
 * _print_rev_recursion - Print passed  string in reverse
 * using recursive function.
 * @s: Passed string.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
