#include <stdio.h>
#include "main.h"

/* No comments */

int main(void)
{

	int a;
	int b;

	a = 98;
	b = 42;

	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	return (0);
}
