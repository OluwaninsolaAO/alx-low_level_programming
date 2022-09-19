#include "main.h"

/**
 * swap_int - swap horses and saddle
 * Return: null
 * @a: horse and rider a
 * @b: horse and rider b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
