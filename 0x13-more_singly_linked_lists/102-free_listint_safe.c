#include <stdlib.h>
#include "lists.h"

/**
  *free_listint_safe - frees alinked list
  *@h: pointer to first node
  *)
  *Return: size of list
  */
size_t free_listint_safe(listint_t **h)
{
	long int pt;
	size_t i = 0;
	listint_t *temp;

	while (*h)
	{
		i++;
		pt = (*h) - (*h)->next;
		if (pt > 0)
		{
			temp = (*h)->next;
			free(*h);
			(*h) = temp;
		}
		else
		{
			(*h) = NULL;
			break;
		}
	}
	return (i);
}
