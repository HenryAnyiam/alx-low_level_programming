#include "main.h"

/**
  *_strpbrk - searches a string for any of a set of bytes.
  *@s: string to search
  *@accept: string byte to search from
  *)
  *Return: return cut string if match, else 0
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
				return (s);
			++i;
		}
		++s;
	}
	return (0);
}
