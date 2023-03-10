#include "main.h"

/**
  *_atoi - converts a string to an integer
  *@s: string to be used
  (*
  *Return: ineger to be returned
  */
int _atoi(char *s)
{
	int i, j;
	unsigned int a;

	i =  0;
	j = 1;
	a = 0;
	while (!(s[i] <= '9' && s[i] >= '0') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			j = -(1);

		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		a = (a * 10) + (s[i] - '0');
		++i;
	}
	a = a * j;
	return (a);
}
