#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number
 * @n: numer
 */
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		num = -1 * num;
	}

	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar((n % 10) + '0');
}
