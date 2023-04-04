#include <stdlib.h>
#include "lists.h"

/**
  *insert_nodeint_at_index - inserts node at index position
  *@head: pointer to first node address
  *@idx: index
  *@n: data
  *)
  *Return: new address
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t *));
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int i = 0;

	if ((!new_node) || (!head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		(*head) = new_node;
		return (*head);
	}
	while (temp)
	{
		if (i == idx)
		{
			new_node->next = temp;
			temp2->next = new_node;
			return (*head);
		}
		temp2 = temp;
		temp = temp->next;
		i++;
	}
	return (NULL);
}
