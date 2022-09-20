#include "main.h"

/**
 * puts_half - Print half portion of string of any lenght
 * Return: Null
 * @str: victim
 */

void puts_half(char *str)
{
	int count, i;

	count = 0;

	while (str[count] != '\0')
		count++;

	if (count % 2 != 0)
		count -= 2;

	for (i = 0; i < (count / 2); i++)
		_putchar(str[i + (count / 2)]);
	_putchar('\n');
}
