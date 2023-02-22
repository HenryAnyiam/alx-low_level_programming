#include "main.h"

/**
  *times_table - prints 9 times table
  */
void times_table(void)
{
	int a, s, n, c, i, m, g, h;

	a = 0;
	s = ' ';
	n = '\n';
	c = ',';
	while (a <= 9)
	{
		i = 0;
		m = 0;
		while (i <= 9)
		{
			m = m + a;
			if ((m == 0) && (i == 0))
				_putchar(m + '0');
			else if (m <= 9)
			{
				_putchar(s);
				_putchar(m + '0');
			}
			else
			{
				g = m / 10;
				h = m % 10;
				_putchar(g + '0');
				_putchar(h + '0');
			}
			if (i != 9)
			{
				_putchar(c);
				_putchar(s);
			}
			++i;
		}
		_putchar(n);
		++a;
	}
}
