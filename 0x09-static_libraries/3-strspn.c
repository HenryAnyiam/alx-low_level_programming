#include "main.h"

/**
  *_strnspn - gets the length of a prefix substring
  *@s: string to be checked
  *@accept: string to check with
  *)
  *Return: number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	char *swap;

	swap = accept;
	a = 0;
	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				++a;
				break;
			}
		if (!(*--accept))
			break;
		accept = swap;
	}
	return (a);
}
