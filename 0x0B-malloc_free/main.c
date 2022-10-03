#include "main.h"
#include <limits.h>

/**
 * No comments
 */

void print_buffer(char *buffer, unsigned int size)
{
	unsigned  int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");

		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char *buffer;

	buffer = create_array(INT_MAX, 'H');

	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
