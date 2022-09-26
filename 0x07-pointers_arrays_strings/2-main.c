#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	char *s = "Hooooo";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	return (0);
}
