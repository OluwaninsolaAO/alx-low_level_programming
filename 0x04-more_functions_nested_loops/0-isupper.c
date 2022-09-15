#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * _isupper - checks char case.
  * Return: 1 0r 0
  * @c: return 1 if true and 0 if not
  */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
