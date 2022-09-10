#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int row, col, sub;

	for (row = '0'; row < '9'; row++)
	{
		for (col = row + 1; col <= '9'; col++)
		{
			for (sub = col + 1; sub <= '9'; sub++)
			{
				if ((col != row) != sub)
				{
					putchar(row);
					putchar(col);
					putchar(sub);

					if (row == '7' && col == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
