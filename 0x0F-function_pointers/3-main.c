#include "3-calc.h"

/**
 * main - This programme computes simple math
 * @argc: arguement counts
 * @argv: arrays of passed arguements
 * Return: 0 on EXIT_SUCESS
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*do_math)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	do_math = get_op_func(argv[2]);
	if (do_math == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", do_math(a, b));
	return (0);
}
