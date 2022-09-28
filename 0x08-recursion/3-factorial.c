#include "main.h"

/**
 * factorial - Recursively calculate the factorial
 * of a given number.
 * @n: passed number.
 * Return: n! (n factorial).
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
