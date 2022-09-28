#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - finds natural sqaure root of n
 * @n: Natural Number
 * Return: Square root.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, n));
}

/**
 * _sqrt - Well, I had to do it my way
 * @n: Just n
 * @j: Guess variable
 * Return: sqrt
 */

int _sqrt(int n, int j)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	while ((j * j) != n && j > -1)
		j--;

	return (j);
}
