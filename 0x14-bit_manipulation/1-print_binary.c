#include "main.h"

/**
  *print_binary - prints the binary representation of a number
  *@n: integer
  */
void print_binary(unsigned long int n)
{
	unsigned long int digit = 0;
	int start = 0;
	int i;

	if (n == 0)
		_putchar('0');
	if (n > 4294967295)
		i = 64;
	else
		i = 32;
	for ( ; i >= 0; i--)
	{
		digit = n >> i;
		if (digit & 1)
			start = 1;
		if (start == 1)
		{
			if (digit & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
