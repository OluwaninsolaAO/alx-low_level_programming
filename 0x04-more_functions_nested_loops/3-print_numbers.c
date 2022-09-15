#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(48 + c);
	}
	_putchar('\n');
}
