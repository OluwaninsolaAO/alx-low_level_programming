#include "main.h"
#include <limits.h>

/**
 * No comments
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");

	if (s == NULL)
	{
		printf("is NULL\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
