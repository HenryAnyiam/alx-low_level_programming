#include "main.h"

/**
  *_sqrt - computes square root number
  *@n: integer to find
  *@i: integer to check as root
  *)
  *Return: returns square root
  */
int _sqrt(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	if (i == n)
	{
		return (-1);
	}
	i++;
	return (_sqrt(n, i));
}

/**
  *_sqrt_recursion - finds square root
  *@n: ineger to find
  *)
  *Return: square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(n, 1));
}
