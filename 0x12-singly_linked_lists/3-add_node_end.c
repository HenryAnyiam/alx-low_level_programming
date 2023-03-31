#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  *add_node_end - add new node to the end of a list
  *@head: address to start of list
  *@str: node data
  *)
  *Return: address of new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup = strdup(str);
	list_t *new_node = (list_t *) malloc(sizeof(list_t *));
	list_t *end = *head;

	if ((!new_node) || (!dup))
	{
		free(dup);
		free(new_node);
		return (NULL);
	}
	for (len = 0; dup[len] != '\0'; ++len)
		;
	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	return (*head);
}
