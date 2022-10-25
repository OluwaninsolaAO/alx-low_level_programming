#include "lists.h"

/**
 * free_listint - free memory of linked list
 * @head: linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
