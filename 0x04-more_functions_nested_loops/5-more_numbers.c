#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			j = c;
			if (c > 9)
			{
				_putchar(49);
				j = c % 10;
			}
			_putchar(48 + j);
		}
		i++;
		_putchar('\n');
	}
}
