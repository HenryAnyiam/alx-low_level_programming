#include "main.h"

/**
  *get_bit - returns the value of a bit at a given index
  *@n: int to check
  *@index: index to check
  *)
  *Return: bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int digit = 0;

	if (index > (sizeof(n) * 8))
		return (-1);
	digit = n >> index;
	if (digit & 1)
		return (1);
	else
		return (0);
	return (-1);
}
