#include <stdlib.h>
#include "lists.h"

/**
  *delete_nodeint_at_index - deletes node at an index
  *@head: pointer to address of first node
  *@index: index of node to delete
  *)
  *Return: 1 if success else -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *temp2;
	listint_t *temp3;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp2 = temp;
		(*head) = temp->next;
		free(temp);
		return (1);
	}
	temp3 = *head;
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		if (i == index)
		{
			free(temp2);
			temp3->next = temp;
			return (1);
		}
		temp3 = temp2;
		++i;
	}
	return (-1);
}
