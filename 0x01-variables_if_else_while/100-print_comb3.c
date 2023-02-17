#include <stdio.h>

/**
  *main- prints all possible two digit combination
  *Return: 0 to end main
  */
int main(void)
{
	int i;
	int d;
	int c;
	int s;
	int n;

	i = '0';
	c = ',';
	s = ' ';
	n = '\n';
	while (i <= '9')
	{
		for (d = i + 1; d <= '9'; ++d)
		{
			putchar(i);
			putchar(d);
			putchar(c);
			putchar(s);
		}
		++i;
	}
	putchar(n);
	return (0);
}
