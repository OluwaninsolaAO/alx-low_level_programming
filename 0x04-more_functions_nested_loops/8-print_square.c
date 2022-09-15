#include <stdio.h>
#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * You can only use _putchar function to print
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	while (size > 0 && i < size)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
