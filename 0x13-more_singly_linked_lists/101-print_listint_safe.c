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

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		pt = head - head->next;
		if (pt > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
