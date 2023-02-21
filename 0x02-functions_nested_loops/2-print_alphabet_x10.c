#include "main.h"

/**
  *print_alphabet_x10 - prints all alphabets 10 times
  */
void print_alphabet_x10(void)
{
	int c;
	int n;
	int i;

	n = '\n';
	i = 0;
	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}
		_putchar(n);
		++i;
	}
}
