#include "main.h"

/**
  *_memset - fills particular memeory with a constant byte
  *@s: pointer to memory to be filled
  *@b: byte to fill with
  *@n: number of first bytes to fill
  *)
  *Return: pointer to modified memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		*(s + i) = b;
	return (s);
}
