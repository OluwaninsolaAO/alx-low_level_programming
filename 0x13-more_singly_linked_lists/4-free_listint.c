#include "lists.h"

/**
 * free_listint - free memory of linked list
 * @head: linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
