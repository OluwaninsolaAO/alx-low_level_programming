#include "lists.h"

/**
 * add_node - Adds new node to the beggining of a linked list
 * @head: head of the linked list
 * @str: str data for the linked list
 * Return: pointer to the new  list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	while (str[len] != '\0')
		len += 1;
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
