#include "lists.h"

/**
 * add_nodeint - Adds node to the begining of a
 * singly linked list.
 * @head: pointer to the head pointer of the linked list
 * @n: int of the new node.
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
