#include "main.h"

/**
 * times_table - Entry point
 * Return: nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j >= 10)
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			else
			{
				_putchar(i * j + '0');
			}

			if (i * j >= 10 && j != 9)
			{
				_putchar(' ');
			}
			else if (j != 9)
			{
				_putchar(' ');
				_putchar(' ');
			}

			if (j != 9)
			_putchar(',');
		}
		_putchar('\n');
	}
}
