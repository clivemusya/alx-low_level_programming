#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head
 *
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	old_head = *head;
	*head = old_head->next;
	n = old_head->n;
	free(old_head);
	return (n);
}
