#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		if (head->n)
		{
			free(head->n);
		}
		free(head);
	}
}
