#include "main.h"

/**
  *cap_string - capitalizes all words of a string
  *@a: string
  *)
  *Return: capitalized string
  */
char *cap_string(char *a)
{
	int i;
	char l, u;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t'
		|| a[i] == ','|| a[i] == ';' || a[i] == ':' 
		|| a[i] == '!' || a[i] == '?'|| a[i] == '"'
		|| a[i] == '(' || a[i] == ')' || a[i] == '{'
		|| a[i] == '}' || a[i] >= '0' &a[i] <= '9')
		{
			l = 'a';
			u = 'A';
			++i;
			while (l <= 'z')
			{
				if (a[i] == l)
					a[i] = u;
				++u;
				++l;
			}
			--i;
		}
		else if (s[0] >= 'a' && s[0] <= z)
			s[0] = s[0] - 32;
		++i;
	}
	return (a);
}
