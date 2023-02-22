#include "main.h"

/**
  *print_times_table - prints times table
  *@n: integer
  */
void print_times_table(int n)
{
	int a, s, p, c, i, m, g, h, j;

	a = 0;
	s = ' ';
	p = '\n';
	c = ',';
	if (!((n > 15) || (n < 0)))
	{
		while (a <= n)
		{
			i = m = 0;
			while (i <= n)
			{
				if ((m == 0) && (i == 0))
					_putchar(m + '0');
				_putchar(s);
				else if (m <= 9)
					_putchar(m + '0');
				else
				{
					if (m <= 99)
					{
						g = m / 10;
						h = m % 10;
						_putchar(g + '0');
						_putchar(h + '0');
					}
					else
					{
						g = m / 100;
						h = m % 100;
						j = (m / 10) % 10;
						_putchar(g + '0');
						_putchar(j + '0');
						_putchar(h + '0');
					}
				}
				if (i != n)
				{
					_putchar(c);
					_putchar(s);
				}
				m = m + a;
			++i;
			}
			_putchar(p);
			++a;
		}
	}
}
