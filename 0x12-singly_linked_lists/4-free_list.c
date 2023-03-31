#include <stdlib.h>
#include "lists.h"

/**
  *free_list - frees a linked list
  *@head: pointer to start of list
  */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		exit(0);
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
