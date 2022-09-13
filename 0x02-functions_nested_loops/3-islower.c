#include "main.h"

/**
 * _islower - Main Entry
 * Return: 1 true 0 false
 * @c: being an automatic variable
 */

int _islower(int c)
{
	int retval;
	int temp;

	for (temp = 'a'; temp <= 'z'; temp++)
	{
		if (c == temp)
			retval = 1;
		else
			retval = 0;
	}

	return (retval);
}
