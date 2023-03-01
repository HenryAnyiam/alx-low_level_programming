#include "main.h"

/**
  *_strcmp - compares strings
  *@s1: string to compare
  *@s2: string to be compared with
  *)
  *Return: string difference
  */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		++i;
	}
	if ((j == 0) && (s1[i] != s2[i]))
		j = s1[i] - s2[i];
	return (j);
}
