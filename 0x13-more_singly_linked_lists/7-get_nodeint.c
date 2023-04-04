#include <stdlib.h>
#include "lists.h"

/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list
  *@head: pointer to head of node
  *@index: node index
  *)
  *Return: pointer to node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *hold = head;

	if (head == NULL)
		return (NULL);
	while (hold)
	{
		++i;
		hold = hold->next;
		if (i == index)
			return (hold);
	}
	return (NULL);
}
