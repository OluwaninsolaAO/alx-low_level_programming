#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file the program
 * is compiled from.
 * Return: 0 on EXIT_SUCCESS
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
