#include <stdio.h>
#include "main.h"

/**
  *print_to_98 - prints from given number to 98
  *@n: given integer
  */
void print_to_98(int n)
{
	int a;

	a = n;
	if (n <= 98)
	{
		while (a <= 98)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
			++a;
		}
	}
	else if (n > 98)
	{
		while (a >= 98)
		{
			printf("%d", a);
			if (a != 98)
				printf("' ");
			--a;
		}
	}
	printf("\n");
}
