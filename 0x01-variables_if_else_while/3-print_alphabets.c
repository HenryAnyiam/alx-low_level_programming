#include <stdio.h>

/**
  *main- prints all alphabets
  *Return: 0 to end main
  */
int main(void)
{
	char c;
	char C;
	char n;

	c = 'a';
	C = 'A';
	n = '\n';
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	while (C <=  'Z')
	{
		putchar(C);
		++C;
	}
	putchar(n);
	return (0);
}
