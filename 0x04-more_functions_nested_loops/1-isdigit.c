#include "main.h"

/**
  *_isdigit - checks for digit
  *@c: digit to be checked
  (*
  *Return: 1 if digit, 0 otherwise
  */
int _isdigit(int c)
{
	int l;
	int val;

	val = 0;
	l = '0';
	while (l <= '9')
	{
		if (c == l)
			val = 1;
		++l;
	}
	return (val);
}

