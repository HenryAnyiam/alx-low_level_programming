#include "main.h"

/**
  *string_toupper - capitalizes a string
  *@a: pointer to string
  *)
  *Return: capitalized string
  */
char *string_toupper(char *a)
{
	int i;
	char l, u;

	i = 0;
	while (a[i] != '\0')
	{
		l = 'a';
		u = 'A';
		while (l <= 'z')
		{
			if (a[i] == l)
				a[i] = u;
			++u;
			++l;
		}
		++i;
	}
	return (a);
}
