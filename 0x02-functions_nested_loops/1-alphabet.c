#include "main.h"

/**
  *print_alphabet - prints alphabet in lower case
  */
void print_alphabet(void)
{
	int c;
	int n;

	c = 'a';
	n = '\n';
	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}
	_putchar(n);
}
