#include <stdlib.h>
#include "lists.h"

/**
  *pop_listint - deletes head of a node
  *@head: pointer to pointer to head of node
  *)
  *Return: current head node data
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head)
		return (0);
	if (*head == NULL)
	{
		free(*head);
		return (0);
	}
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
