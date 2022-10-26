#include "lists.h"

/**
 * free_listint2 - free memory of linked list part 2
 * @head: linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *ptr;

	if (head == NULL)
		return;

	while (temp)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}
	*head = NULL;
}
