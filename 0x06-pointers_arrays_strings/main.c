#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int i;

	reverse_array(a, 7);

	for (i = 0; i < 7; i++)
		printf("%d, ", a[i]);
	printf("\n");

	return (0);
}
