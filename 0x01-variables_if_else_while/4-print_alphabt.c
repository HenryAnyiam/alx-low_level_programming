#include <stdio.h>

/**
  *main- prints alphabet exept q and e
  *Return: 0 to end main
  */
int main(void)
{
	char c;
	char n;

	c = 'a';
	n = '\n';
	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			++c;
			continue;
		}
		putchar(c);
		++c;
	}
	putchar(n);
	return (0);
}
