#include "main.h"

/**
  *clear_bit - sets the value of a bit to 0 at a given index
  *@n: pointer to integer
  *@index: index
  *)
  *Return: 1 if success else -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int digit = *n;
	unsigned int i;
	unsigned long int j = 1;

	if (index > (sizeof(n) * 8))
		return (-1);
	if (!((digit >> index) & 1))
		return (1);
	for (i = 0; i < index; i++)
		j *= 2;
	digit = *n ^ j;
	*n = digit;
	return (1);
}
