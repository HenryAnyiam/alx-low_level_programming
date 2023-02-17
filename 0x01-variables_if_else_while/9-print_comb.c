#include <stdio.h>

/**
  *main- prints all single digits
  *Return: 0 to end main
  */
int main(void)
{
	int i;
	int c;
	int s;
	int n;

	i = '0';
	c = ',';
	s = ' ';
	n = '\n';
	while (i <= '9')
	{
		putchar(i);
		putchar(c);
		putchar(s);
		++i;
	}
	putchar(n);
	return (0);
}
