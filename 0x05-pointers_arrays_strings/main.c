#include <stdio.h>
#include "main.h"

/* No comments */

int main(void)
{
	char *str;

	str = "My School";
	rev_string(str);

	printf("%s\n", str);

	return (0);
}
