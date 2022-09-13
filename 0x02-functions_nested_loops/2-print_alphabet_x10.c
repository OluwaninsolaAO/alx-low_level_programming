#include  "main.h"

/**
 * print_alphabet_x10 - Entry point to this file
 * Return - void
 */

void print_alphabet_x10(void)
{
	int i;
	char temp;

	for (i = 1; i <= 10; i++)
	{
		for (temp = 'a'; temp <= 'z'; temp++)
			_putchar(temp);

		_putchar('\n');
	}
}
