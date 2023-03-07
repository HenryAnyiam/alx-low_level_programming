#include "main.h"

/**
  *_strlen - gets the length of string
  *@s: string to check
  *)
  *Return: length of string
  */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 +_strlen(s));
}

/**
  *_palindrome - checks through a string
  *@s: string
  *@l: length of string
  *)
  *Return: 1 if palindrome, else 0
  */
int _palindrome(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (_palindrome((s + 1), (l - 2)));
	}
	return (0);
}

/**
  *is_palindrome - confirms if string is palindrome or not
  *@s: string to check
  *)
  *Return: 1 if palindrome, else 0
  */
int is_palindrome(char *s)
{
	return (_palindrome(s, (_strlen(s) - 1)));
}
