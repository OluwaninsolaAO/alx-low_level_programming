#include "main.h"
#include <stdio.h>

/**
 * main - simple programme that print its name
 * @argc: count
 * @argv: vetor
 * Return: void.
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
