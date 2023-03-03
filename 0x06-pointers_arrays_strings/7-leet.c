#include "main.h"

/**
  *leet - encodes a string into 1337
  *@a: string
  *)
  *Return: encoded string
  */
char *leet(char *a)
{
	int i, j;

	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	i = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (b[j] != '\0')
		{
			if (a[i] == b[j])
			{
				a[i] = c[j];
				break;
			}
			++j;
		}
		++i;
	}
	return (a);
}
