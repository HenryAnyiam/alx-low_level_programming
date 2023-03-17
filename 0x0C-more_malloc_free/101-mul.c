#include <stdlib.h>
#include "main.h"

/**
  *_count - counts an array
  *@arr: array
  *)
  *Return: legth
  */
int _count(char *arr)
{
	int len;
	for (len = 0; arr[len] != '\0'; len++)
		;
	return (len - 1);
}

/**
  *_puts - prints array
  *@arr: array
  */
void _puts(char *arr)
{
	if (*arr)
	{
		_puts(arr + 1);
		_putchar(*arr);
	}
}

/**
  *_check - checks array
  *@arr: array
  *@len: length of string
  *)
  *Return: 1 or 0
  */
int _check(char *arr, int len)
{
	int i;
	for (i = 0; i <= len; i++)
	{
		if (!(arr[i] >= '0' && arr[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
  *_atoi - converts string to integers
  *@arr: string
  *@len: length
  *)
  *Return: integer
  */
int _atoi(char *arr, int len)
{
	int i;
	unsigned long a, b;

	b = 10;
	for (i = 1; i < (len - 1); i++)
		b *= 10;
	a = 0;
	for (i = 0; i <= len; i++)
	{
		a += (arr[i] - '0') * b;
		b /= 10;
	}
	return (a);
}

/**
  *_realloc - reallocate a memory block
  *@ptr: pointer to memory
  *@old_size: old size
  *@new_size: new size
  *)
  *Return: Null or pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *hold;
	unsigned int i, a;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		hold = malloc(new_size);
		if (hold == NULL)
			return (NULL);
		return (hold);
	}
	hold = malloc(new_size);
	a = old_size;
	if (new_size < old_size)
		a = new_size;
	if (hold == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		*((char *)(hold) + i) = *((char *)(ptr) + i);
	free(ptr);
	return (hold);
}

/**
  *_itoa: convert integer to char
  *@m: integer
  *)
  *Return: char array
  */
char *_itoa(unsigned long m)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * 1);
	for (i = 0; m > 0; i++)
	{
		arr[i] = (m % 10) + '0';
		m /= 10;
		arr = _realloc(arr, (sizeof(char) * (i + 1)), (sizeof(char) * (i + 2)));
	}
	return (arr);
}

/**
  *main - multiplies two integers
  *@argc: number of arguments
  *@argv: array of arguments
  */
int main(int argc, char **argv)
{
	char *res;
	int len1, len2;
	unsigned long m;

	if (argc != 3)
	{
		_puts("\nrrorE");
		exit(98);
	}
	len1 = _count(argv[1]);
	len2 = _count(argv[2]);
	if ((_check(argv[1], len1) == 0) || (_check(argv[2], len2) == 0))
	{
		_puts("\nrrorE");
		exit(98);
	}
	m = _atoi(argv[1], len1) * _atoi(argv[2], len2);
	res = _itoa(m);
	_puts(res);
	_putchar('\0');
	_putchar('\n');
	return (0);
}
