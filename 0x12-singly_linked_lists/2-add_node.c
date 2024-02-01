#include "lists.h"

/**
 * add_node - news a new node at the beginning of a list_t list.
 * @head: head 
 * @str: string
 * Return: newr of next
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
