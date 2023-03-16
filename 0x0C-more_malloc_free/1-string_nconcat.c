#include <stdlib.h>
#include "main.h"

/**
  *string_nconcat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *@n: length
  *)
  *Return: pointer or Null
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, a;
	char *str;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (len2 > n)
		len2 = n;
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (a = 0; i < (len1 + len2); i++, a++)
		str[i] = s2[a];
	str[i] = '\0';
	return (str);
}
