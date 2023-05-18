#include "lists.h"

/**
 * dlistint_len - calculates the length of a doubly linked list
 * @h: head of node
 * )
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;
	
	if (h == NULL)
		return (i);
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
