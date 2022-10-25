#include "lists.h"

/**
 * add_nodeint_end - Adds node to the end of a singly
 * link list.
 * @head: Passed link
 * @n: content of the new list
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (*head == NULL)
	{
		ptr->next = NULL;
		*head = ptr;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	if (*head == NULL)
	{

	}

	ptr->next = NULL;
	temp->next = ptr;

	return (*head);
}
