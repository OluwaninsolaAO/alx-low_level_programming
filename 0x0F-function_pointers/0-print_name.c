#include "function_pointers.h"

/**
 * print_name - calls the passed function f while passing
 * the string name to the called function.
 * @name: passed string
 * @f: passed function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
