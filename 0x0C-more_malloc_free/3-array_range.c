#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates an array of integers
  *@min: minimum number
  *@max: maximum number
  *)
  *Return: Null or pointer
  */
int *array_range(int min, int max)
{
	int *p;
	int i, a;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = min, a = 0; i <= max; i++, a++)
		*(p + a) = i;
	return (p);
}
