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
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
