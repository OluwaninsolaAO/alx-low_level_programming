#include "lists.h"

/**
 * dlistint_len - Returns a total number of nodes in a
 * given list
 * @h: A doubly linked list
 * Return: Total nodes in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t sum = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		sum++;
	}
	return (sum);
}
