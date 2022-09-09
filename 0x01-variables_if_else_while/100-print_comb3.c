#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int row, col;
	
	for (row = '0'; row < '9'; row++)
	{
		for (col = row + 1; col <= '9'; col++)
		{
			if (col != row)
			{
				putchar(row);
				putchar(col);
				
				if (row == '8' && col == '9')
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
