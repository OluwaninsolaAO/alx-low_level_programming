#include "main.h"

/**
 * print_last_digit - Entry point
 * Return: the last digit
 *
 * @n: automatic var
 */

int print_last_digit(int n)
{
	if (n < 0)
		int temp = (n * -1) % 10;
	else
		int temp = n % 10;

	_putchar(temp + '0');

	return (temp);
}
