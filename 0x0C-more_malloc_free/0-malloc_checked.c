#include <stdlib.h>
#include "main.h"

/**
  *malloc_checked - allocate memory using malloc
  *@b: memory space
  *)
  *Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
		return (0);
	}
	return (malloc(b));
}
