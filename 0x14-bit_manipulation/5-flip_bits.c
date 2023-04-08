#include "main.h"

/**
  *flip_bits - returns the number of bits to flip to get from n to m
  *@n: first integer
  *@m: second integer
  *)
  *Return: Number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int digit =  n ^ m;
	int i, flip;

	if (digit <= 4294967295)
		i = 32;
	else
		i = 64;
	flip = 0;
	for ( ; i >= 0; i--)
	{
		if ((digit >> i) & 1)
			flip++;
	}
	return (flip);
}
