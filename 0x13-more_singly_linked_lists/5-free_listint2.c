#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *free_listint2 - frees a linked list
  *@head: pointer to pointer to head of node
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(*head))
	{
		printf("Freed !\n");
		exit(0);
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(head);
}
