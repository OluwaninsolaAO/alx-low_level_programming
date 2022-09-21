#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	char s1[98] = "Hello there, my name is Oluwaninsola.";
	char *ptr;

	ptr = _strncpy(s1, "123456789", 8);

	printf("%s\n", ptr);

	return (0);
}
