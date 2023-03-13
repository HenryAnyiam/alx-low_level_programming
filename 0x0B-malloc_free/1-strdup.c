#include <stdlib.h>
#include "main.h"

/**
  *_strdup - duplictes a string
  *@str: string
  *)
  *Return: Null or pointer
  */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
