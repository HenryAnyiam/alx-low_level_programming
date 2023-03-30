#include <stdio.h>
#include "lists.h"

/**
  *list_len - number of elements in linked list
  *@h: pointer to linked list head
  *)
  *Return: length
  */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		++i;
		h = h->next;
	}
	return (i);
}
