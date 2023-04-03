#include <stdio.h>
#include "lists.h"

/**
  *listint_len - calculates the length of the linked list
  *@h: pointer to first node
  *)
  *Return: length
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		++i;
		h = h->next;
	}
	return (i);
}
