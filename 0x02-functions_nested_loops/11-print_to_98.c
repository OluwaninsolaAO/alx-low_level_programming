#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - just print to 98
 * Return: nothing but prints alot
 * @n: auto bots -- roll out
 */

void print_to_98(int n)
{
	int  i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
			printf("%d, ", i);
	}

	_putchar('\n');
}
