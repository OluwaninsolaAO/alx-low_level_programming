#include "main.h"

/**
 * print_last_digit - Entry point
 * Return: the last digit
 *
 * @n: automatic var
 */

int print_last_digit(int n)
{
	int temp = n % 10;

	_putchar(temp + '0');

	return (temp);
}
