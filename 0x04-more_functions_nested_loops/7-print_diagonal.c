#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * You can only use _putchar function to print
 * @n: is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (n > 0 && i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(32);
			j++;
		}
		_putchar(92);
		/*_putchar(32);*/
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
