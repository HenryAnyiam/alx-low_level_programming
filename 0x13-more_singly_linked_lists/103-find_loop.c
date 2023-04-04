#include <stdlib.h>
#include "lists.h"

/**
  *find_listint_loop - find loop in a struct
  *@head: pointer to first node
  *)
  *Return: node of loop else NULL
  */
listint_t *find_listint_loop(listint_t *head)
{
	long int pt;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		pt = head - head->next;
		if (pt > 0)
			head = head->next;
		else
			return (head);
	}
	return (NULL);
}
