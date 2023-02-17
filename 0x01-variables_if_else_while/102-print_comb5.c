#include <stdio.h>

/**
  *main- print possible combinations of two two digit numbers
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
	int f;

	i = '0';
	s = ' ';
	c = ',';
	n = '\n';
	while (i <= '9')
	{
		for (d = '0'; d <= '9'; ++d)
		{
			for (l = i; l <= '9'; ++l)
			{
				for (f = d + 1; f <= '9'; ++f)
				{
					putchar(i);
					putchar(d);
					putchar(s);
					putchar(l);
					putchar(f);
					if (!(i == '9' && f == '9' && l == '9' && d == '8'))
					{
						putchar(c);
						putchar(s);
					}
				}
			}
		}
		++i;
	}
	putchar(n);
	return (0);
}
