#include "main.h"

/**
  *print_diagonal - print diagonal line
  *@n: number of times \ is printed
  */
void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		i = 1;
		while (i <= n)
		{
			for (j = 2; j <= i; ++j)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			++i;
		}
	}
}
