#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: head to doubly linked list
 * )
 * Return: number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;
	
	if (h == NULL)
		return (i);
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
