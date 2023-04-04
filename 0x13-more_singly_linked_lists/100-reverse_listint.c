#include <stdlib.h>
#include "lists.h"

/**
  *reverse_listint - reverses a linked list
  *@head: pointer to address of first node
  *)
  *Return: first node of reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = (*head);
		(*head) = next;
	}
	*head = rev;
	return (rev);
}
