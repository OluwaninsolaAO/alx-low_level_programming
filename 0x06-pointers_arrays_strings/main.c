#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "Wolrd!\n";
	char *ptr;

	ptr = _strcat(s1, s2);

	printf("%s", ptr);

	return (0);
}
