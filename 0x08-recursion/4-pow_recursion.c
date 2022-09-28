#include "main.h"

/**
 * _pow_recursion - Solve for x
 * raised to the power of y
 * @x: integer
 * @y: super script
 * Return: result.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y < 0)
		return (-1);

	return (1);
}
