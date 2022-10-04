#include "main.h"

/**
 * No comment
 */

int main(int ac, **av)
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
		return (1);

	printf("%s", s);
	free(s);
	return (0);
}
