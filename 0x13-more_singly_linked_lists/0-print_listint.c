#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 * @h: head of the passed list
 * Return: total number of the linked list
 */
size_t print_listint(const listint_t *h)
{
	int num = 1;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		return (num + print_listint(h->next));
	}
	return (0);
}
