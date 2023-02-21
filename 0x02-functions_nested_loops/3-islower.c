#include "main.h"

/**
  *_islower - checks for lower case character
  *@c: alphabet to be checked
  (*
  *Return: 1 if lower, 0 otherwise
  */
int _islower(int c)
{
	int l;
	int val;

	val = 0;
	l = 'a';
	while (l <= 'z')
	{
		if (c == l)
			val = 1;
		++l;
	}
	return (val);
}
