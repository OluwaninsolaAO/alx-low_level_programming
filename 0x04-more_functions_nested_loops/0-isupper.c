#include "main.h"

/**
 * _isupper - Checks for uppercase letter
 * Return: 1 if isupper and 0 if is not
 * @c: auto val
 */

int _isupper(int c)
{
	int i, retval;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		retval = 1;
		else
		retval = 0;
	}

	return (retval);
}
