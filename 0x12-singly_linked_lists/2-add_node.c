#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_node - adds a new node to the beginning of the linked list
  *@head: header to first node
  *@str: string
  *)
  *Return: address of new element
  */
list_t *add_node(list_t **head, const char *str)
{
	char *dup = strdup(str);
	int i;
	list_t *new_node = (list_t *) malloc(sizeof(list_t *));

	if (new_node == NULL)
		return (NULL);
	for (i = 0; dup[i] != '\0'; ++i)
		;
	new_node->str = dup;
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
