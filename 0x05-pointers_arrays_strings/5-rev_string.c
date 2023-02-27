#include "main.h"

/**
  *rev_string - reverses a string
  *@s: string to b reversed
  */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		++i;
	char j[i];
	int a;

	--i;
	a = 0;
	while (i >= 0)
	{
		j[a] = *(s + i);
		++a;
		--i;
	}
	s = j;
}
