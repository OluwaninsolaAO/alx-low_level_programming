#include "main.h"

/**
 * puts2 - Print one skip the next
 * Return: Nothing
 * @str: victim
 */

void puts2(char *str)
{
	int count, i;

	while (count != '\n')
		count++;

	for (i = 0; i < count; i++)
	{
		if ((i + 1) % 2 != 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
