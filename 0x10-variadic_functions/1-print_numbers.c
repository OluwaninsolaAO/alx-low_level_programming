#include "variadic_functions.h"

/**
 * print_numbers - print a set of passed n numbers of int
 * all separated by separator
 * @separator: the separator
 * @n: number of passed numbers.
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *c;

	if (separator == NULL)
		c = " ";
	else
		c = separator;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i + 1) != n)
			printf("%s", c);
	}
	printf("\n");
}
