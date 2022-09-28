#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	int n;

	n = _sqrt_recursion(1024);
	printf("%d\n", n);
	n = _sqrt_recursion(17);
	printf("%d\n", n);
	n = _sqrt_recursion(-1);
	printf("%d\n", n);

	return (0);
}
