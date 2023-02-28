#include <stdio.h>
#include "main.h"

/**
  *print_array - prints array of integers
  *@a: array to be printed from
  *@n: times to be printed
  */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		printf("%d", a[i]);
		if (!(i == n))
			printf(", ");
		++i;
	}
	_putchar('\n');
}
