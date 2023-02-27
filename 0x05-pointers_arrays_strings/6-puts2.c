#include "main.h"

/**
  *puts2 - prints every other character of a string
  *@str: string to print
  */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i = i + 2;
	}
	_putchat('\n');
}
