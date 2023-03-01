#include "main.h"

/**
  *_strncpy - copies a string
  *@dest: string to be copied to
  *@src: string to be copied from
  *@n: times to copy
  *)
  *Return: returns copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((src[i] != '\0') && (i <= (n - 1)))
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
