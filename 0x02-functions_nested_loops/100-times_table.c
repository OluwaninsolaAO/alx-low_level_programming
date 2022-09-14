#include "main.h"

/**
 * print_times_table - just print times table
 * Return: table
 * @n: auto bot..roll out
 */

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j >= 100)
					_putchar(i * j / 100 + '0');

				if (i * j >= 10)
					_putchar(((i * j) % 100) / 10 + '0');

				_putchar(i * j % 10 + '0');

				if (i * (j + 1) >= 100 && j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (i * (j + 1) >= 10 && j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}

			_putchar('\n');
		}
	}
}
