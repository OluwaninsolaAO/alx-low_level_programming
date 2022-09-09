#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int row, col;
	
	for (row = 0; row <= 98; row++)
	{
		for (col = row + 1; col <= 99; col++)
		{
			putchar((row / 10) + '0');
			putchar((row % 10) + '0');
			putchar(' ');
			putchar((col / 10) + '0');
			putchar((col % 10) + '0');
			
			if (row == 98 && col == 99)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
