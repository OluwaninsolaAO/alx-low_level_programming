#include "main.h"
#include <limits.h>

/**
 * No comments
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	printf("%s\n", s);
	free(s);
	return (0);
}
