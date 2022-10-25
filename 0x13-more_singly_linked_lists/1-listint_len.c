#include "lists.h"

/**
 * listint_len - Count the lenght of a linked list
 * @h: Linked list
 * Return: sum total of the linked list
 */
size_t listint_len(const listint_t *h)
{
	int num = 1;

	if (h != NULL)
		return (num + listint_len(h->next));
	return (0);
}
