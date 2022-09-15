#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * _isdigit - function checks for a digit (0 through 9)
  * @c: digit to check for
  * Return: 1 or 0
  */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
