#include "variadic_functions.h"

/**
 * print_strings - print a set of passed n strings
 * all separated by separator
 * @separator: the separator
 * @n: number of passed numbers.
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *c;
	char *holder;

	if (separator == NULL)
		c = "";
	else
		c = separator;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		holder = va_arg(ap, char*);
		if (holder != NULL)
			printf("%s", holder);
		else
			printf("(nil)");

		if ((i + 1) != n)
			printf("%s", c);
	}
	printf("\n");
	va_end(ap);
}

