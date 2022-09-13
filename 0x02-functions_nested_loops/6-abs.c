#include "main.h"

/**
 * _abs - Entry point
 * Return: Abosolute value
 *
 * @n: automatic variable
 *
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
