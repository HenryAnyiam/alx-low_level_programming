#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *print_listint_safe - prints a linked list
  *@head: pointer to first node
  *)
  *Return: number of nodes in list
  */
size_t print_listint_safe(const listint_t *head)
{
	long int pt;
	size_t i = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		pt = head - head->next;
		i++;
		if (pt < 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
	}
	return (i);
}
