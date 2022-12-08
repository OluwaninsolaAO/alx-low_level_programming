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

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	printf("%d\n", h->n);
	return (num + 1);
}
