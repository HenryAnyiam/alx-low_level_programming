#include "lists.h"

/**
 * dlistint_len - calculates the length of a doubly linked list
 * @h: head of node
 * )
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	while (h->prev != NULL)
		h = h->prev;
	return (i);
}
