#include "main.h"

/**
  *_prime - checks if prime
  *@n: integer to check with
  *@i: integer to check with
  *)
  *Return: 1 if prime, else 0
  */
int _prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if ((n % i) == 0)
	{
		return (0);
	}
	i++;
	return (_prime(n, i));
}

/**
  *is_prime_number - checks for prime
  *@n: integer to check
  *)
  *Return: 1 if prime, else 0
  */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return(_prime(n, 2));
}
