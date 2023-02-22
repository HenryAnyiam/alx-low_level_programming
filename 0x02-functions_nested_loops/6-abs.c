#include "main.h"

/**
  *_abs - gets the absolute value of an integer
  *@n: integer
  (*
  *Return: absolute value of n
  */
int _abs(int n)
{
	int val;

	if (n < 0)
		val = n - (n - n);
	else
		val = n;
	return (val);
}
