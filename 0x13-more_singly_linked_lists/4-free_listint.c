#include "lists.h"

/**
 * free_listint - free memory of linked list
 * @head: linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free(&(head->n));
	free_listint(head->next);
	free(head->next);
}
