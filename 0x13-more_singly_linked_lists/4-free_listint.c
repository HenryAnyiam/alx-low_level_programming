#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_listint: frees linked list
  *@head: start of node
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	{
		printf("Freed !\n");
		exit(0);
	}
	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
