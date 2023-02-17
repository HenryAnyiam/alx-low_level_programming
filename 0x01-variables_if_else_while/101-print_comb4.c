#include <stdio.h>

/**
  *main- prints all possible three digits combination
  *Return: 0 to end main
  */
int main(void)
{
	int i;
	int d;
	int l;
	int s;
	int c;
	int n;

	i = 0;
	s = ' ';
	c = ',';
	n = '\n';
	while (i <= '9')
	{
		for (d = i + 1; d <= '9'; ++d)
			for (l = d + 1; l <= '9'; ++l)
			{
				putchar(i);
				putchar(d);
				putchar(l);
				putchar(c);
				putchar(s);
			}
		++i;
	}
	putchar(n);
	return (0);
}
