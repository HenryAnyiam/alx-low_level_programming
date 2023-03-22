#include "function_pointers.h"

/**
  *array_iterator - iterates through an array
  *@array: array
  *@size: size of array
  *@action: pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
		for (i = 0; i < size; i++)
			if (array[i] != NULL)
				action(array[i]);
}
