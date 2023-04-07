#include <stdlib.h>
#include "main.h"

/**
  *binary_to_uint - converts a binary number to an unsigned int
  *@b: array of chars
  *)
  *Return: decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len = 0;
	int start = 0;
	int i, j, k, l;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if ((start == 0) && (b[len]  == '1') && (b[0] != '1'))
			start += len;
		if ((b[len] != '1') && (b[len] != '0'))
			return (0);
		len++;
	}
	len--;
	l = 1;
	for (i = start, j = (len - start); i <= len; i++, j--)
	{
		for (k = j; k > 0; k--)
		{
			l *= 2;
		}
		dec += (b[i] - '0') * l;
		l = 1;
	}
	return (dec);
}
