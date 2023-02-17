#include <stdio.h>

/**
  *main- prints all the numbers of base 16
  *Return: 0 to end main
  */
int main(void)
{
	int i;
	char c;
	char n;

	c = 'a';
	n = '\n';
	for (i = '0'; i <= '9' ; ++i)
		putchar(i);
	while (c <= 'f')
	{
		putchar(c);
		++c;
	}
	putchar(n);
	return (0);
}
