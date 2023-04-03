#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint - add new new node to the beginning of list
  *@head: header to first node
  *@n: integer
  *)
  *Return: address on new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t *));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
