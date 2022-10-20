#include "lists.h"

/**
 * add_node_end - Append node at the end of a linked list
 * @head: pointer to linked list
 * @str: new node str
 * Return: pointer to the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *ptr;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[len])
		len += 1;

	node->len = len;
	node->str = strdup(str);
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
	}
	return (node);
}
