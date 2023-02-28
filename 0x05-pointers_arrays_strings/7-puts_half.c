#include "main.h"

/**
  *puts_half - prints half a string
  *@str: string to print
  */
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (*(str + a) != '\0')
		++a;
	if ((a % 2) == 0)
	{
		b = a / 2;
		while (b <= a)
		{
			if (*(str + b) == '\0')
				break;
			_putchar(*(str + b));
			++b;
		}
	}
	else
	{
		b = (a - 1) / 2;
		++b;
		while (b <= a)
		{
			if (*(str + b) == '\0')
				break;
			_putchar(*(str + b));
			++b;
		}
	}
	_putchar('\n');
}
