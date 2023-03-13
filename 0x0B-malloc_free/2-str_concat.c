#include <stdlib.h>
#include "main.h"

/**
  *str_concat - concatenates two string
  *@s1: First String
  *@s2: Second String
  *)
  *Return: Null or pointer
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int c, i, size;
	char *str;

	size = 0;
	if (s1 != NULL)
		while (s1[size] != '\0')
			size++;
	if (s2 != NULL)
		while (s2[size] != '\0')
			size++;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	c = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			c++;
			i++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			str[c] = s2[i];
			c++;
			i++;
		}
	}
	str[c + 1] = '\0';
	return (str);
}
