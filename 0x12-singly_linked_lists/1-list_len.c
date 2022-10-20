#include "lists.h"

/**
 * list_len - return linked list len
 * @h: linked list head
 * Return: total number of items on the list
 */
size_t list_len(const list_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		num += 1;
		return (num + list_len(h->next));
	}
	return (num);
}
