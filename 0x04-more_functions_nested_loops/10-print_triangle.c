#include "main.h"

/**
  *print_triangle - prints a triangle
  *@size: size of triangle
  */
void print_triangle(int size)
{
	int i, j, k, l;

	if (!(size <= 0))
	{
		i = 1;
		j = size - 1;
		while (i <= size)
		{
			for (k = j; k >= 1; --k)
				_putchar(' ');
			for (l = 1; l <= i; ++l)
				_putchar('#');
			_putchar('\n');
			++i;
			--j;
		}
	}
	else
		_putchar('\n');
}
