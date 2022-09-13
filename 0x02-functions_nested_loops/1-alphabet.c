#include "main.h"
/**
 * print_alphabet - Entry point to the program
 * Return: Always 0 unless stated  otherwise
 */

void print_alphabet(void)
{
	char temp;

	for (temp = 'a'; temp <= 'z'; temp++)
		_putchar(temp);

	_putchar('\n');

}
