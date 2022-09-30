#include "main.h"
#include <stdio.h>

/**
 * main - print arg count
 * @argc: count
 * @argv: vector
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
