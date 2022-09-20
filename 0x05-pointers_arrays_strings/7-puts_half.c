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
	count--;

	if (count % 2 != 0)
		count -= 1;

	for (i = 0; i < (count / 2); i++)
	{
		if (str[i + (count / 2)] == '\0')
			continue;

		_putchar(str[i + (count / 2)]);
	}

	_putchar('\n');
}
