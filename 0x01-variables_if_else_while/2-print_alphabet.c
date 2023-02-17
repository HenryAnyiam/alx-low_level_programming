#include <stdio.h>

/**
  *main- prints lowercase alphabets
  *Return: 0 to end main
  */
int main(void)
{
	char c;
	char n;

	c = 'a';
	n = '\n';
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	putchar(n);
	return (0);
}
