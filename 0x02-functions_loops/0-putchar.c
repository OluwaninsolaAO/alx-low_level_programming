#include "main.h"

/**
 * main - Entry point to the program
 * Return: Always 1 on Success
 */

int main(void)
{
	char txt[9] = "_putchar";

	for (int i = 0; i < 9; i++)
		_putchar(txt[i]);
		
	_putchar('\n');

	return (0);
}
