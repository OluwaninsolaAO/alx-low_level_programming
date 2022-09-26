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
		printf("0x%02x ", ref[i]);
	}
	printf("\n");
}

int main(void)
{
	char buffer[98] = {0x00};

	_memset(buffer, 0x01, 98);

	simple_print(buffer, 98);

	return (0);
}
