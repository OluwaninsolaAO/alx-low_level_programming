#include "variadic_functions.h"

/**
 * print_strings - print a set of passed n strings
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
		c = "";
	else
		c = separator;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char) != NULL)
			printf("%s", va_arg(ap, char));
		else
			printf("(nil)");

		if ((i + 1) != n)
			printf("%s", c);
	}
	printf("\n");
	va_end(ap);
}

