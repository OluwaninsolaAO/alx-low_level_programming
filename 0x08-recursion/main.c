#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	int n;

	n = _pow_recursion(2, 16);
	printf("%d\n", n);
	n = _pow_recursion(5, -2);
	printf("%d\n", n);

	return (0);
}
