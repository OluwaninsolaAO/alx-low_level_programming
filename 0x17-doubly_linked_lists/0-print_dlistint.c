#include "lists.h"

/**
 * print_dlistint - Prints elements of a doubly linked
 * lists.
 * @h: The passed lists
 * Return: Total Number of lists printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *copy = h;

	while (copy->next != NULL)
	{
		printf("%d\n", copy->n);
		num++;
		copy = copy->next;
	}
	printf("%d\n", copy->n);
	return (num + 1);
}
