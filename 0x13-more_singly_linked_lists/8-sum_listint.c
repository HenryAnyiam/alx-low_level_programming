#include <stdlib.h>
#include "lists.h"

/**
  *sum_listint - sums all the data of a linked list
  *@head: start of node
  *)
  *Return: sum
  */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
