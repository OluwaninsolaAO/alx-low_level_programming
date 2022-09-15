#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - code  entry
 * Return: 0
 */

int main(void)
{
	int num;
	int end = 100;

	for (num = 1; num <= end; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}

		printf(" ");
	}
	putchar('\n');
	return (0);
}
