#include "main.h"

/**
  *_strncat - concatenates string
  *@dest: string to append to
  *@src: string to append
  *@n: length to be appended
  *)
  *Return: concatenated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while ((src[j] != '\0') && (j <= (n - 1)))
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	if (j < n)
		dest[i] = '\0';
	return (dest);
}
