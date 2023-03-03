#include "main.h"

/**
  *print_number -  prints an integer
  *@n: integer to print
  */
void print_number(int n)
{
	int i, j;

	j = 100000000;
	if (n == 0)
		_putchar(n + '0');
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 0)
	{
		while ((n / 10) != 0)
		{
			i = n / j;
			if (b != 0)
				break;
			j /= 10;
		}
		while (j > 0)
		{
			_putchar((n / j) + '0');
			n %= j;
			j /= 10;
		}
	}
}
