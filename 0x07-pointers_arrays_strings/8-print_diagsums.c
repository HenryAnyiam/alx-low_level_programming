#include <stdio.h>
#include "main.h"

/**
  *print_diagsums - prints the sum of the two diagonals of a square matrix of integers
  *@a: pointer to array
  *@size: size of array
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	int result1, result2;

	i = size - 1;
	j = 0;
	result1 = 0;
	result2 = 0;
	while (j <= (size - 1))
	{
		result1 += *(a + ((size * j) + j));
		result2 += *(a + ((size * j) + i));
		++j;
		--i;
	}
	printf("%d, %d\n", result1, result2);
}
