#include "main.h"

/**
  *reverse_array - reverses an array of integers
  *@a: array of integers
  *@n: number of elements in array
  */
void reverse_array(int *a, int n)
{
	int i, j;
	int b, c;

	i = 0;
	j = n - 1;
	while (i <= j)
	{
		b = a[i];
		c = a[j];
		a[i] = c;
		a[j] = b;
		++i;
		--j;
	}
}
