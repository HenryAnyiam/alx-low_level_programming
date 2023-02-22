#include "main.h"

/**
  *jack_bauer - prints 24 hours
  */
void jack_bauer(void)
{
	int h;
	int l;
	int m;
	int n;
	int c;
	int k;

	h = '0';
	c = ':';
	k = '\n';
	while (h <= '2')
	{
		l = '0';
		if ((h == '2') && (l == '4'))
			break;
		while (l <= '9')
		{
			m = '0';
			while (m <= '6')
			{
				n = '0';
				while (n <= '9')
				{
					_putchar(h);
					_putchar(l);
					_putchar(c);
					_putchar(m);
					_putchar(n);
					_putchar(k);
					++n;
				}
				++m;
			}
			++l;
		}
		++h;
	}
}
