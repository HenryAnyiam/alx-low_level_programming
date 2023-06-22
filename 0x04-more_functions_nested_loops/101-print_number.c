#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		_putchar('-');
		n = -1 * n
		num = -1 * num;
	}

	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar((n % 10) + '0');
}
