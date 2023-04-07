#include "main.h"

/**
  *set_bit - sets the value of a bit to 1 at a given index to 1
  *@n: pointer to integer
  *@index: index
  *)
  *Return: 1 if success else -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int digit = *n;
	unsigned int i;
	unsigned long int j = 1;

	if ((digit >> index) & 1)
		return (1);
	else
	{
		for (i = 0; i < index; i++)
			j *= 2;
		digit = *n | j;
		*n = digit;
		return (1);
	}
	return (-1);
}
