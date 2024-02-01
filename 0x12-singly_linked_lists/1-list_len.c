#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
