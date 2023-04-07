#include "main.h"

/**
  *get_endianness - checks the endianness of a system
  *Return: 0 if Big, 1 if little
  */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
