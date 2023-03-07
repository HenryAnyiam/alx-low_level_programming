#include "main.h"

/**
  *_puts_recursion - prints a string, followed by new line.
  *@s: string to print
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	++s;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
