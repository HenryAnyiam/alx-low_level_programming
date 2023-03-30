#include <stdio.h>
#include "lists.h"

/**
  *print_list - prints linked lists elements
  *h: pointer to linked head
  *)
  *Return: length
  */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		++i;
		h = h->next;
	}
	return (i);
}
