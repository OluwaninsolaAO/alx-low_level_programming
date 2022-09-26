#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

void simple_print(char *ref, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (!(i % 10) && i)
			printf("\n");

		printf("0x%02x ", ref[i]);
	}
	printf("\n");
}

int main(void)
{
	char buffer[98] = {0};
	char buffer2[98] = {1,2,3,4,5,6,7,8,9,10};

	_memcpy(buffer + 50, buffer2, 10);

	simple_print(buffer, 98);

	return (0);
}
