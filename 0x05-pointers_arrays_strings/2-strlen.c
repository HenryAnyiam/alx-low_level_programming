#include "main.h"

/**
  *_strlen - counts the length of a string
  *@s: pointer to string
  (*
  *Return: total length
  */
int _strlen(char *s)
{
	int l;

	l = 0;
	while(*(s + l) != '\0')
		++l;
	return (l);
}
