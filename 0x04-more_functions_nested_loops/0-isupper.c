#include "main.h"

/**
  *_isupper - checks for upper case character
  *@c: alphabet to be checked
  (*
  *Return: 1 if upper, 0 otherwise
  */
int _islower(int c)
{
	int l;
	int val;

	val = 0;
	l = 'A';
	while (l <= 'Z')
	{
		if (c == l)
			val = 1;
		++l;
	}
	return (val);
}

