#include "main.h"

/**
 * reverse_array - reverse passed array.
 * @a: being the passed array.
 * @n: being the number of objects in the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n -= 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
