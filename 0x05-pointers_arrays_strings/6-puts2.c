#include "main.h"

/**
  *puts2 - prints every other character of a string
  *@str: string to print
  */
void puts2(char *str)
{
	int i, j;

	j = 0;
	while (*(str + j) != '\0')
		++j;
	i = 0;
	while (i <= j)
	{
		if (*(str + i) == '\0')
			continue;
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
