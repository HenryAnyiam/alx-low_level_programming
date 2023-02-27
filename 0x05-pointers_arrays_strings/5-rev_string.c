#include "main.h"

/**
  *rev_string - reverses a string
  *@s: string to be reverse
  */
void rev_string(char *s)
{
	int i, j;
	char a, b;

	i = 0;
	while (*(s + i) != '\0')
		++i;
	--i;
	j = 0;
	while (j <= i)
	{
		a = s[j];
		b = s[i];
		s[i] = a;
		s[j] = b;
		--i;
		++j;
	}
}
