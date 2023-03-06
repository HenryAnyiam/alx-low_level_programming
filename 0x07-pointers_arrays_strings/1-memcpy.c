#include "main.h"

/**
  *_memcpy - copies a particular memory to another
  *@src: memory to be copied from
  *@dest: memory to be copied to
  *@n: bytes of memory to copy
  *)
  *Return: pointer to modified memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		*(dest + i) = *(src + i);
	return (dest);
}
