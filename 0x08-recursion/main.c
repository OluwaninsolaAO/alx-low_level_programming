#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	int n;

	n = factorial(-1024);
	printf("%d\n", n);
	n = factorial(5);
	printf("%d\n", n);

	return (0);
}
