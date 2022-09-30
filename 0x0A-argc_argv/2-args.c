#include "main.h"
#include <stdio.h>

/**
 * main - prints all passed arguements
 * @argc: count
 * @argv: vector
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	while (argc)
	{
		printf("%s\n", *argv);
		argv++;
		argc--;
	}

	return (0);
}
