#include "main.h"

/**
 * _puts - print array of characters ending with "\0"
 * Return: Null
 * @str: pointer to the passed string.
 */

void _puts(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
