#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: head
 * @str: str
 * Return: address of the next element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next, *i;

	if (str == NULL)
		return (NULL);
	next = malloc(sizeof(list_t));
	if (next == NULL)
		return (NULL);
	next->str = strdup(str);
	if (next->str == NULL)
	{
		free(next);
		return (NULL);
	}
	next->len = _strlen(next->str);
	next->next = NULL;
	if (*head == NULL)
	{
		*head = next;
		return (next);
	}
	i = *head;
	while (i->next)
		i = i->next;
	i->next = next;
	return (next);
}
