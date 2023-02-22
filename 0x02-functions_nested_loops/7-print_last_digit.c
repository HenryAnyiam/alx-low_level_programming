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

	val = n % 10;
	_putchar(n);
	return (val);
}
