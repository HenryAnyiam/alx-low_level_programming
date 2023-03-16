#include <stdlib.h>
#include "main.h"

/**
  *_calloc - allocates memory and initialize to 0
  *@nmemb: number of elements
  *@size: bytes
  *)
  *Return: pointer or null
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)p + 1) = 0;
	return (p);
}
