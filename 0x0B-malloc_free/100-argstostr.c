#include <stdlib.h>
#include "main.h"

/**
  *argstostr - concatenates all the arguments
  *@ac: argc
  *@av: argv
  *)
  *Return: Null or pointer
  */
char *argstostr(int ac, char **av)
{
	int i, j, len, c;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
			s[c] = av[i][j];
		s[c] = '\n';
		c++;
	}
	return (s);
}
