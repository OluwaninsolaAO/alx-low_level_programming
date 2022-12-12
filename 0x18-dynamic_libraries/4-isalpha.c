#include "main.h"

/**
 * _isalpha - Main Entry
 * Return: 1 true 0 false
 * @c: being an automatic variable
 */

int _isalpha(int c)
{
	int retval = 0;
	int temp;

	for (temp = 'a'; temp <= 'z'; temp++)
	{
		if (c == temp)
			retval = 1;
	}

	for (temp = 'A'; temp <= 'Z'; temp++)
	{
		if (c == temp)
			retval = 1;
	}

	return (retval);
}
