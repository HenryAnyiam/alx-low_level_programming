#include "main.h"

/**
  *print_last_digit - prints last digit of an integer
  *@n: given integer
  (*
  *Return: Last digit
  */
int print_last_digit(int n)
{
	int val;

	if (n < 0)
		val = -(n % 10);
	else
		val = n % 10;
	_putchar(val + '0');
	return (val);
}
