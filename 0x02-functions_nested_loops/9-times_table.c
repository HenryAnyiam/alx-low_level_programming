#include "main.h"

/**
  *9-times_table - print 9 times multiplication table
  */
void times_table(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;

	a = b = c = d = e = f = g = h = i = j = 0;
	k = ' ';
	l = ',';
	n = '\n';
	while (j <= 81)
	{
		_putchar(a + '0');
		_putchar(l);
		_putchar(k);
		if (b <= 9)
		{
			_putchar(k);
			_putchar(b + '0');
		}
		else
		{
			m = b / 10;
			o = b % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (c <= 9)
		{
			_putchar(k);
			_putchar(c + '0');
		}
		else
		{
			m = c / 10;
			o = c % 10;
			_putchar(m +'0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (d <= 9)
		{
			_putchar(k);
			_putchar(d + '0');
		}
		else
		{
			m = d / 10;
			o = d % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (e <= 9)
		{
			_putchar(k);
			_putchar(e + '0');
		}
		else
		{
			m = e / 10;
			o = e % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (f <= 9)
		{
			_putchar(k);
			_putchar(f + '0');
		}
		else
		{
			m = f / 10;
			o = f % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (g <= 9)
		{
			_putchar(k);
			_putchar(g + '0');
		}
		else
		{
			m = g / 10;
			o = g % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (h <= 9)
		{
			_putchar(k);
			_putchar(h + '0');
		}
		else
		{
			m = h / 10;
			o = h % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (i <= 9)
		{
			_putchar(k);
			_putchar(i + '0');
		}
		else
		{
			m = i / 10;
			o = i % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(l);
		_putchar(k);
		if (j <= 9)
		{
			_putchar(k);
			_putchar(j + '0');
		}
		else
		{
			m = j / 10;
			o = j % 10;
			_putchar(m + '0');
			_putchar(o + '0');
		}
		_putchar(n);
		++b;
		c = c + 2;
		d = d + 3;
		e = e + 4;
		f = f + 5;
		g = g + 6;
		h = h + 7;
		i = i + 8;
		j = j + 9;
	}
}
