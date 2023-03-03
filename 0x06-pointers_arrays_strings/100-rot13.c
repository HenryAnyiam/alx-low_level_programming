#include "main.h"

/**
  *rot13 - encodes a string into 1337
  *@a: string
  *)
  *Return: encoded string
  */
char *rot13(char *a)
{
	int i, j;

	char b[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
