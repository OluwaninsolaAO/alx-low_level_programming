#include "main.h"
#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: count
 * @argv: vector
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (*argv[1] * *argv[2]));

	return (0);
}
