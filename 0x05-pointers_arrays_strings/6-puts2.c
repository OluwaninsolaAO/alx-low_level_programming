#include "main.h"

/**
 * puts2 - Print one skip the next
 * Return: Nothing
 * @str: victim
 */

void puts2(char *str)
{
	int count, i;

	count = 0;

	while (str[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		if ((i + 1) % 2 != 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
