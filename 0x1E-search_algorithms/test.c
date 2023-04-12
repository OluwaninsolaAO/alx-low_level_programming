#include <stdio.h>
#include <math.h>

int main(void)
{
	size_t num = 200;

	printf("%d\n", (int) sqrt(num));
	printf("%d\n", (int) ((int) sqrt(num) * (int) sqrt(num)));
	printf("%d\n", (int) (num / sqrt(num)));
	return (0);
}
