#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: head to doubly linked list
 * )
 * Return: number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	while (h->prev != NULL)
		h = h->prev;
	return (i);
}
