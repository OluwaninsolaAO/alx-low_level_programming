#include <stdio.h>
#include "main.h"

/**
 * No comments
 */

int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 1; i++)
		s1[i] = '*';
	s1[i] = '\0';


	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);

	printf("%s\n", ptr);

	for (i = 0; i < 98; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", s1[i]);
	}
	printf("\n");

	return (0);
}
