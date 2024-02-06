#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: head
  * @n: int
  * Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_tail;
	return (new_tail);
}
