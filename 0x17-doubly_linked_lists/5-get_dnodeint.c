#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (current)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
