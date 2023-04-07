#include <unistd.h>
#include "main.h"

/**
  *_putchar - writes a char to stdout
  *@c: character to print
  *)
  *Return: print
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
