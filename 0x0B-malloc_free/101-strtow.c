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
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	c = 0;
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i + 1] != ' ')
			++j;
		else if ((str[i] != ' ') && ((str[i + 1] == ' ') || (str[i + 1] == '\0')))
		{
			s[c] = malloc(sizeof(char) * (j + 1));
			j = 0;
			if (s[c] == NULL)
			{
				for (; c > 0; c--)
					free(s[c]);
				free(s[c]);
				free(s);
				return (NULL);
			}
			++c;
		}
	}
	c = 0;
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] != ' ') && (str[i + 1] != ' '))
		{
			s[c][j] = str[i];
			++j;
		}
		else if ((str[i] != ' ') && ((str[i + 1] == ' ') || str[i + 1] == '\0'))
		{
			s[c][j] = str[i];
			s[c][j + 1] = '\0';
			++c;
			j = 0;
		}
	}
	s[c] = NULL;
	return (s);
}
