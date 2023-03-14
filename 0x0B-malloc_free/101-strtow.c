#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  *strtow - splits strings into words
  *@str: string
  *)
  *Return: Null or pointer
  */
char **strtow(char *str)
{
	char **s;
	unsigned int i, j, c;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	c = 0;
	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != ' ') && ((str[i + 1] == ' ') || (str[i + 1] == '\0')))
			c++;
	s = malloc(sizeof(char *) * (c + 1));
	if (s == NULL || c == 0)
		return (NULL);
	c = j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			++j;
		if ((str[i] != ' ') && ((str[i + 1] == ' ') || (str[i + 1] == '\0')))
		{
			s[c] = malloc(sizeof(char) * (j + 1));
			j = 0;
			if (s[c] == NULL)
				return (NULL);
			++c;
		}
	}
	c = j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			s[c][j++] = str[i];
		if ((str[i] != ' ') && ((str[i + 1] == ' ') || str[i + 1] == '\0'))
		{
			s[c++][j] = '\0';
			j = 0;
		}
	}
	s[c] = NULL;
	return (s);
}
