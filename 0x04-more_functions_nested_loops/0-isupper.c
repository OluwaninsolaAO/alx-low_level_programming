#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * _isupper - function check if c is uppercase
  * @c : char to check
  * Return: 1 0r 0
  */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
