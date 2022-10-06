#include "main.h"

/**
 * No comments
 */

int main(void)
{
	int *i;

	i = malloc_checked(sizeof(int) * 10);
	printf("%p\n", (void *)i);

	return (0);
}
