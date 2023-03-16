#include <stdlib.h>
#include "main.h"

/**
  *_realloc - reallocate a memory block
  *@ptr: pointer to memory
  *@old_size: old size
  *@new_size: new size
  *)
  *Return: Null or pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *hold;
	unsigned int i, a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	hold = malloc(old_size);
	if (hold != NULL)
		for (i = 0; i < old_size; i++)
			*((char *)(hold) + i) = *((char *)(ptr) + i);
	free(ptr);
	ptr = malloc(new_size);
	a = old_size;
	if (new_size < old_size)
		a = new_size;
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		*((char *)(ptr) + i) = *((char *)(hold) + i);
	free(hold);
	return (ptr);
}
