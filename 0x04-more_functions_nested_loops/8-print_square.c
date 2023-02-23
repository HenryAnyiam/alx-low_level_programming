#include "main.h"

/**
  *print_square - prints square
  *@size: size of square
  */
void print_square(int size)
{
	int i, j;

	if (!(size <= 0))
	{
		i = 1;
		while (i <= size)
		{
			for (j = 1; j <= size; ++j)
				_putchar('#');
			_putchar('\n');
			++i;
		}
	}
	else
		_putchar('\n');
}
