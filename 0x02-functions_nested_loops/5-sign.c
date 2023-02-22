#include "main.h"

/**
  *print_sign - prints the sign of a number
  *@n: number to check 
  (*
  *Return: sign of number
  */
int print_sign(int n)
{
	int p;
	int m;
	int val;

	val = 0;
	p = '+';
	m = '-';
	if (n > 0)
	{
		_putchar(p);
		val = 1;
	}
	else if (n < 0)
	{
		_putchar(m);
		--val
	}
	else
		_putchar(val);
	return (val);
}
