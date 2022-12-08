#include "lists.h"

/**
 * add_dnodeint - Adds node to the begining of a list
 * @head: Head of the list
 * @n: New element to be added
 * Return: NULL if failed or address of the new element
 * on success.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (!head || !(*head))
	{
		*head = new;
		return (new);
	}
	else
	{
		new->prev = NULL;
		new->next = *head;
		*head = new;
		*head = new;
		return (new);
	}
	return (NULL);
}
