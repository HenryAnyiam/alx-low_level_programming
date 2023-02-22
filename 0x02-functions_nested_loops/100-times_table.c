#include "main.h"

/**
  *print_times_table - prints times table
  *@n: integer
  */
void print_times_table(int n)
{
	int a, i, m;

	if (!((n > 15) || (n < 0)))
	{
		for (a = 0; a <= n; ++a)
		{
			m = 0;
			for (i = 0; i <= n; ++i)
			{
				if ((m == 0) && (i == 0))
					_putchar(m + '0');
				else if (m <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else
				{
					if (m <= 99)
					{
						_putchar(' ');
						_putchar((m / 10) + '0');
						_putchar((m % 10) + '0');
					}
					else
					{
						_putchar((m / 100) + '0');
						_putchar(((m / 10) % 10)  + '0');
						_putchar((m % 100) + '0');
					}
				}
				if (i != n)
					_putchar(',');
				m = m + a;
			}
			_putchar('\n');
		}
	}
}
