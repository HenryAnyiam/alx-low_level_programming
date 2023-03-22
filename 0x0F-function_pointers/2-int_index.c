#include "function_pointers.h"

/**
  *int_index - searches an array for an int
  *@array: array
  *@size: size of array
  *@cmp: pointer to function
  *)
  *Return: int index or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if ((cmp != NULL) && (array[size - 1] != NULL))
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
