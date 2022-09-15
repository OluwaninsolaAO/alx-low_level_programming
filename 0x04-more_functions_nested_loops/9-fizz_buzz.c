#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - code  entry
 * Description: The “Fizz-Buzz test” is an interview question
 * designed to help filter
 * out the 99.5% of programming job
 * candidates who can’t seem to program
 * their way out of a wet paper bag.
 * Write a program that prints the numbers
 * from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead
 * of the number and for the multiples
 * of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space
 * You are allowed to use the standard library
 * Return: 0
 */
int main(void)
{
	int num;
	int end = 100;

	for (num = 1; num <= end; num++)
	{
		if (num % 3 == 0 && num % 5)
		{
			printf("FizzBuzz ");
		} else if (num % 3 == 0)
		{
			printf("Fizz ");
		} else if (num % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			if (num == 100)
				printf("%d", num);
			printf("%d ", num);
		}
	}
	putchar('\n');
	return (0);
}
