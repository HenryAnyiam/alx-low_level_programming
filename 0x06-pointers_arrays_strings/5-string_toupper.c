#include "main.h"

/**
  *string_toupper - capitalizes a string
  *@*: pointer to string
  */
char *string_toupper(char *)
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
}
