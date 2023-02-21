#include "main.h"

/**
  *_isalpha - checks if an entry is an upper case letter
  *@c: alphabet to check
  (*
  *Return: 1 if upper, 0 otherwise
  */
int _isalpha(int c)
{
	int u;
	int val;

	val = 0;
	u = 'A';
	while(u <= 'Z')
	{
		if (c == u)
			val = 1;
		++u;
	}
	return (val);
}
