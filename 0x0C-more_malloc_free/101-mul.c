#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc < 3 || argc >3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

