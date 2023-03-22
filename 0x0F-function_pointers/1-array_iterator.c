#include "function_pointers.h"

/**
  *arry_iterator - iterates through an array
  *@array: array
  *@size: size of array
  *@action: pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		*action(array[i]);
}
