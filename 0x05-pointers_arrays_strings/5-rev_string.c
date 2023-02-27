#include "main.h"

/**
  *reverse - reverses a string
  *@c: string to b reversed
  *@i: length of string
  *)
  *Return: final reverse
  */
char reverse(int i, char *c)
{
	char *j;
	int a, b;

	a = 0;
	b = i - 1;
	while (i >= 0)
	{
		*(j + a) = *(c + b);
		++a;
		--b;
	}
	return (*j);
}

/**
  *rev_string - reverses a string
  *@s: string to be reverse
  */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		++i;
	*s = reverse(i, s);
}
