#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *create_array - create an array of chars
  *@size: size of array
  *@c: specific character
  *)
  *Return: Null or pointer
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
