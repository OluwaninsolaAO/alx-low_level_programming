#include "lists.h"

/**
 * print_list - print linked list
 * @h: linked list head
 * Return: total number of items on the list
 */
size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		num += 1;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		return (num + print_list(h->next));
	}
	return (num);
}
